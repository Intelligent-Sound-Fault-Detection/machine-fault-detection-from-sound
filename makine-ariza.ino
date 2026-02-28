/* ESP32 WiFi Makine Arıza */
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

// Sensör ve Pin Tanımlamaları
Adafruit_MPU6050 mpu;
const int yesilLed = 2;   // Stabil çalışma pini
const int kirmiziLed = 4; // Uyarı/Arıza pini
const int potPin = 34;    // Mikrofon (Simüle edilen potansiyometre)

// ISO 10816 ve Endüstriyel Standartlara Dayalı Eşik Değerleri
const float TITRESIM_UYARI = 2.8;  // ISO 10816 Zone C başlangıcı (Anomali) [cite: 2026-02-25]
const float TITRESIM_KRITIK = 7.1; // ISO 10816 Zone D başlangıcı (Arıza) [cite: 2026-02-25]
const float SICAKLIK_UYARI = 50.0; // Termal ısınma başlangıcı [cite: 2026-02-25]
const float SICAKLIK_KRITIK = 75.0;// Kritik termal limit (Sargı güvenliği) [cite: 2026-02-25]
const int SES_KRITIK = 3000;       // Akustik anomali eşiği [cite: 2026-02-17]

void setup(void) {
  Serial.begin(115200);
  pinMode(yesilLed, OUTPUT);
  pinMode(kirmiziLed, OUTPUT);

  // MPU6050 Başlatma Kontrolü
  if (!mpu.begin()) {
    Serial.println("MPU6050 sensörü bulunamadı!");
    while (1) yield();
  }
  Serial.println("Sistem Analize Hazır... (ISO 10816 Standartları Aktif)");
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);
  
  int sesVerisi = analogRead(potPin);
  float sicaklik = temp.temperature;
  float titresimRMS = abs(a.acceleration.z - 9.8); // Net titreşim (Yerçekimi hariç) [cite: 2026-02-25]

  // --- KARAR MEKANİZMASI VE UYARI SİSTEMİ ---

  if (sicaklik > SICAKLIK_KRITIK || titresimRMS > TITRESIM_KRITIK || sesVerisi > SES_KRITIK) {
    // DURUM 1: KRİTİK ARALIK (ARIZA)
    digitalWrite(kirmiziLed, HIGH);
    digitalWrite(yesilLed, LOW);
    Serial.print("--- ARIZA TESPIT EDILDI! --- | "); 
  } 
  else if (sicaklik >= SICAKLIK_UYARI || titresimRMS >= TITRESIM_UYARI || sesVerisi >= 1500) {
    // DURUM 2: ANOMALİ ARALIĞI (UYARI)
    digitalWrite(yesilLed, HIGH);
    digitalWrite(kirmiziLed, (millis() / 500) % 2); // Kırmızı LED flaşör modunda
    Serial.print("--- DIKKAT: ANOMALI VAR! --- | "); 
  }
  else {
    // DURUM 3: STABİL ARALIK (NORMAL)
    digitalWrite(yesilLed, HIGH);
    digitalWrite(kirmiziLed, LOW);
    Serial.print("DURUM: ARIZA YOK (STABIL)  | "); 
  }

  // Bilgisayarcı arkadaşların için veri akışı (CSV formatına uygun) [cite: 2026-02-25]
  Serial.print("Sicaklik: "); Serial.print(sicaklik);
  Serial.print(" C | Titresim: "); Serial.print(titresimRMS);
  Serial.print(" m/s2 | Ses: "); Serial.println(sesVerisi);

  delay(300); // İzleme kolaylığı için örnekleme hızı [cite: 2026-02-25]
}

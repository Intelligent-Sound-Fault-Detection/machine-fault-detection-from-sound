# 🔊 machine-fault-detection-from-sound
Detecting and classifying machine faults from acoustic signals using AI and signal processing.

## 🎯 Project Overview
This project focuses on detecting machine faults using sound data.  
We analyze acoustic signals from machines and use AI models to identify whether they operate normally or abnormally.  
The system combines signal processing, machine learning, and hardware integration for real-time fault detection.

## 👥 Team Members

| Name | Department | Role | Responsibilities |
|------|-------------|------|------------------|
| **Hüsna SARI** | Computer Engineering | Data preprocessing, Model design, feature extraction (MFCC, Spectrogram), evaluation, documentation,Backend & Optimization | AI & Project Coordination |
| **Aleyna Erdoğan** | Computer Engineering | Recording interface development, data preprocessing support, API / web interface deployment, documentation support | Software & Interface Developer |
| **İlayda Erdoğan** | Electrical-Electronics Engineering | Hardware & Signal Processing | Microphone setup, signal filtering, FFT analysis, ESP32 integration, real-time testing |

---

## ⚙️ Tech Stack
- **Languages:** Python  
- **Libraries:** Librosa, PyTorch, scikit-learn, NumPy, Matplotlib  
- **Hardware:** ESP32, INMP441 Microphone, Raspberry Pi  
- **Tools:** GitHub, VS Code, Jupyter Notebook, GitHub Projects (Kanban)

---

## 🧩 Datasets
- [DCASE 2025 Challenge Dataset](https://dcase.community/challenge2025/task-first-shot-unsupervised-anomalous-sound-detection-for-machine-condition-monitoring)  
- [MIMII Dataset](https://zenodo.org/records/3384388)  
- [ToyADMOS 2025](https://dcase.community/documents/workshop2025/proceedings/DCASE2025Workshop_Harada_78.pdf)

Data are used for training and evaluation.  
Real-time tests will be performed using recorded machine sounds via hardware devices.


## 🧠 Methodology
1. **Data Acquisition** – Collect or use existing machine sound datasets.  
2. **Preprocessing** – Filter noise, normalize and segment sound signals.  
3. **Feature Extraction** – Compute MFCC, Mel-spectrogram, and frequency domain features.  
4. **Model Development** – Train machine learning and deep learning models.  
5. **Hardware Integration** – Test model on ESP32/Raspberry Pi for real-time inference.  
6. **Evaluation** – Use metrics like Accuracy, F1-score, and ROC-AUC to assess performance.



## 📅 Project Timeline (February–April 2026)

| **Week** | **Date Range** | **Task** | **Responsible** | **Details** |
|-----------|----------------|-----------|------------------|--------------|
| **Week 1** | 21 Feb – 27 Feb | Literature review & method selection | Hüsna & Aleyna & İlayda | Study DCASE, MIMII, ToyADMOS; decide on methodology |
|  |  | Project goals & planning | Hüsna & Aleyna & ilayda | Define objectives, weekly milestones, risk assessment |
| **Week 2** | 28 Feb – 13 Mar | Microphone & sensor setup + Data collection | İlayda | Assemble microphone/sound card and record sounds from real/simulated faults |
|  |  | Recording interface / software development | Aleyna | Develop Python/web-based sound recording interface |
| **Week 3** | 14 Mar – 27 Mar | Data preprocessing & feature extraction | Hüsna & Aleyna | Noise filtering, segmentation, extract MFCC, Mel-Spectrogram, RMS, ZCR; visualize results |
|  |  | Frequency domain analysis | İlayda | Interpret frequency patterns and relate to fault types |
| **Week 4** | 28 Mar – 3 Apr | Baseline ML models & Deep Learning setup | Aleyna | Train SVM, RandomForest, XGBoost; set up CNN/Autoencoder |
|  |  | Deep Learning optimization | Hüsna & Aleyna | Optimize architecture, fine-tune parameters |
| **Week 5** | 4 Apr – 10 Apr | Model evaluation | Hüsna | Evaluate models: Accuracy, F1, ROC-AUC, Precision-Recall |
|  |  | Signal interpretation | İlayda | Analyze frequency distortions vs fault types |
| **Week 6** | 11 Apr – 17 Apr | Hardware integration & real-time demo | İlayda | Deploy/test model on ESP32 / Raspberry Pi |
|  |  | API / Interface deployment | Aleyna | Build web interface with FastAPI or Streamlit |
| **Week 7** | 18 Apr – 24 Apr | Documentation & final report | Hüsna & Aleyna | Write report, UML diagrams, workflow documentation |
|  |  | Technical documentation & diagrams | İlayda | Draw schematics, sensor diagrams, workflow charts |
| **Week 8** | 25 Apr – 1 May | Presentation & demo video | Entire Team | Prepare poster, slides, and demo video |


## 🗂️ Project Management
- Managed using **GitHub Projects (Kanban)**
- Columns: 🟡 To Do → 🔵 In Progress → 🟣 Testing → 🟢 Done
- Each card/issue contains:
  - **Task description**
  - **Assigned team member(s)**
  - **Estimated completion week**
- Progress is tracked weekly from **Saturday → Saturday**, aligned with the project timeline.

# 🔊 machine-fault-detection-from-sound
Detecting and classifying machine faults from acoustic signals using AI and signal processing.

## 🎯 Project Overview
This project focuses on detecting machine faults using sound data.  
We analyze acoustic signals from machines and use AI models to identify whether they operate normally or abnormally.  
The system combines signal processing, machine learning, and hardware integration for real-time fault detection.

## 👥 Team Members

| Name | Department | Role | Responsibilities |
|------|------------|------|-----------------|
| **Hüsna SARI** | Computer Engineering | Data & ML Engineer | Model design, feature extraction (MFCC, Mel-Spectrogram, RMS, ZCR), baseline ML model setup (SVM, RandomForest, XGBoost), deep learning (CNN/Autoencoder) training & optimization, model evaluation, AI-related documentation, project coordination |
| **Aleyna ERDOĞAN** | Computer Engineering | Software & Interface Developer | Recording interface development, data preprocessing support, support for ML models, CNN/Autoencoder training assistance, API/web interface deployment, documentation support |
| **İlayda ERDOĞAN** | Electrical-Electronics Engineering | Hardware & Signal Processing | Microphone & sensor setup, signal filtering, FFT analysis, ESP32/hardware integration, real-time testing, technical documentation (schematics, workflow charts) |

---

## ⚙️ Tech Stack
- **Languages:** Python, C++
- **Libraries:** Librosa, PyTorch, scikit-learn, NumPy, Matplotlib  
- **Hardware:** ESP32, INMP441 Microphone,MPU6050(Accelerometer)
- **Tools:** GitHub, VS Code, Jupyter Notebook, GitHub Projects (Kanban)

---

## 🧩 Datasets
- **Primary Dataset:** [MIMII Dataset](https://zenodo.org/records/3384388)  
- **Optional:** [DCASE 2025 Challenge](https://dcase.community/challenge2025/task-first-shot-unsupervised-anomalous-sound-detection-for-machine-condition-monitoring), [ToyADMOS 2025](https://dcase.community/documents/workshop2025/proceedings/DCASE2025Workshop_Harada_78.pdf)
- **Optional:** [ToyADMOS 2025](https://dcase.community/documents/workshop2025/proceedings/DCASE2025Workshop_Harada_78.pdf)
The **MIMII dataset** will be used for initial model training and evaluation.  
Recorded sounds from the ESP32 microphone setup will be used for validation and real-world testing.

---

## 🧠 Methodology
1. **Data Acquisition** – Record sounds using ESP32 and use MIMII dataset for model training.  
2. **Preprocessing** – Apply noise filtering, normalization, and segmentation.  
3. **Feature Extraction** – Compute MFCC, Mel-Spectrogram, RMS, and ZCR features.  
4. **Model Development** – Train and evaluate ML models (SVM, RandomForest, XGBoost) entirely on a computer.  
5. **Evaluation** – Assess performance using Accuracy, F1-score, ROC-AUC, and visualize **Confusion Matrix**.  
6. **Interface** – Build Streamlit web interface to run inference on the computer and visualize predictions.  
7. **Preliminary Deep Learning Tests (Optional)** – Conduct limited CNN/Autoencoder experiments for future extension.

---

## 📅 Project Timeline (ESP32-only, Parallel Workflow)
| Week | Date Range | Task | Responsible | Details |
|------|------------|------|-------------|---------|
| Week 1 | 21 Feb – 27 Feb | Literature review & dataset selection | Entire Team | Study DCASE & MIMII; finalize main dataset (MIMII) |
|  |  | Project goals & Kanban setup | Hüsna | Define objectives, open GitHub Project, assign tasks |
| Week 2 | 28 Feb – 13 Mar | Microphone & ESP32 setup | İlayda | Assemble INMP441 microphone with ESP32; test recording quality |
|  |  | Data preprocessing scripts | Aleyna | Noise filtering, normalization, segmentation scripts |
| Week 3 | 14 Mar – 27 Mar | Feature extraction | Hüsna & Aleyna | Extract MFCC, Mel-Spectrogram, RMS, ZCR; visualize features |
|  |  | Frequency analysis | İlayda | Interpret ESP32 recordings in frequency domain |
| Week 4 | 28 Mar – 3 Apr | Baseline ML model training | Hüsna & Aleyna | Train SVM, RandomForest, XGBoost on MIMII dataset |
|  |  | ESP32 test recordings | İlayda | Record multiple machine sounds for validation dataset |
| Week 5 | 4 Apr – 10 Apr | Model evaluation & visualization | Hüsna | Evaluate models (Accuracy, F1, ROC-AUC, Confusion Matrix) |
|  |  | Streamlit interface prototype | Aleyna | Build interface to test ML predictions on computer |
| Week 6 | 11 Apr – 17 Apr | Data collection & interface testing | İlayda & Aleyna | Record real-time sounds via ESP32 and integrate with Streamlit app |
| Week 7 | 18 Apr – 24 Apr | Documentation & report writing | Hüsna & Aleyna | Prepare technical report, figures, workflow diagrams |
|  |  | Hardware documentation | İlayda | Sensor connection diagrams, signal flow charts |
| Week 8 | 25 Apr – 1 May | Presentation & optional CNN experiment | Entire Team | Record demo video, prepare slides, run preliminary CNN test (optional) |

---

## ✅ Summary of Realistic Goals
| Area | Target | Feasibility |
|-------|---------|-------------|
| Feature-based ML models | SVM / RF / XGBoost | ✅ Achievable |
| Streamlit interface | Local demo for testing | ✅ Achievable |
| ESP32 sound collection | Real-time audio input | ✅ Achievable |
| Preliminary CNN test | Optional experimental stage | ⚠️ Optional / Stretch goal |



## 🗂️ Project Management
- Managed using **GitHub Projects (Kanban)**
- Columns: 🟡 To Do → 🔵 In Progress → 🟣 Testing → 🟢 Done
- Each card/issue contains:
  - **Task description**
  - **Assigned team member(s)**
  - **Estimated completion week**
- Progress is tracked weekly from **Saturday → Saturday**, aligned with the project timeline.

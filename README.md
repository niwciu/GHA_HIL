# 📡 Running HIL Tests with GitHub Actions

![HIL Logo](https://niwciu.github.io/GHA_HIL/main.png)

Welcome to the **Hardware-in-the-Loop (HIL) CI/CD** tutorial project!  
This repository contains **materials, documentation, source code**, and **examples** used in a video tutorial series about running real embedded hardware tests using **GitHub Actions**.

🎥 **Video series playlist:**  
https://www.youtube.com/@MyEmbeddedWay/playlists

---

## 📁 Repository Structure -> TBD

```
.
├── .github/      
│   └── workflows/          # GitHub Actions automation pipelines
├── docs/                   # MkDocs documentation source
├── hw/                     # Hardware configurations for example project
├── scripts/                # Helper scripts for RPi / build / flashing
├── lib/                    # External librarioes used in example project
├── src/                    # Example project source code
├── test/
│   ├── _config_scripts/    # Config scripts for running all project targers
│   ├── template/           # Uint tests module tempate
│   ├── unity/              # Unity frameowrk
│   └── hil_tests/          # hil tests folder
└── README.md               # You're here 🙂
```

---

## 🚀 What You Will Learn

This repository teaches you how to:

- 🛠 **Set up a Raspberry Pi HIL Test Server**
- 🔌 **Connect Raspberry Pi to ST-Link and the target MCU**
- 🧪 **Write automated HIL tests using py-micro-hil**
- ⚙️ **Install applications from sources**
- 🤖 **Run real hardware tests inside GitHub Actions**
- 📦 **Publish test artifacts & logs**

---

## 📚 Documentation

All documentation lives inside the docs/ directory and is published automatically to the project’s GitHub Pages site: 
https://niwciu.github.io/GHA_HIL/

### ▶ HIL Fundamentals
- What is HIL?
- Why use HIL in CI/CD?
- Hardware & software requirements

### ▶ Raspberry Pi HIL Server Setup
- OS installation  
- Installing stlink  
- Installing py-micro-hil  
- Lighttpd setup  
- Connecting RPi to your microcontroller

### ▶ Writing HIL Tests - working with test framework
- Python API basics  
- Example test scripts  
- Fixtures & test structure  
- Debugging common issues

### ▶ GitHub Actions Integration
- Workflow structure explained  
- Flashing firmware automatically  
- Running py-micro-hil tests remotely  
- Collecting logs & artifacts

### ▶ Example Project
- Minimal firmware  
- HIL test suite  
- Full CI pipeline

---

## 🔧 Requirements

### Hardware
- Raspberry Pi 3/4/5  
- ST-Link V2/V3  
- Target microcontroller (STM32 recommended)  
- Cables & power supply  

### Software
- Raspberry Pi imager - https://www.raspberrypi.com/software/
- GCC / G++ / CMake / lighttpd
- stlink - https://github.com/stlink-org/stlink
- py-micro-hil - https://pypi.org/project/py-micro-hil/
- GitHub Actions runner (self-hosted)

---

## ▶ Quick Start

TBD
<!-- ### 1️⃣ Clone this repository
```bash
git clone https://github.com/<your_repo>.git
cd <your_repo>
```

### 2️⃣ Set up the Raspberry Pi  
Instructions inside:  
📄 `rpi-setup/hil_rpi_manual.md`

### 3️⃣ Run example HIL test
```bash
hiltest examples/basic_blink/test_blink.py
```

### 4️⃣ Trigger GitHub Actions workflow  
Push to repository → workflow flashes firmware → runs tests → uploads results. -->

---

## 🧪 Example GitHub Actions Workflow

TBD 
<!-- ```yaml
name: HIL Tests

on: [push, pull_request]

jobs:
  hil:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4
      - name: Install dependencies
        run: sudo pip install py-micro-hil
      - name: Run HIL tests on remote server
        run: hiltest -h
``` -->

---

## 🗂️ Roadmap

- [ ] Publish MkDocs website   
- [ ] Documentation update
- [ ] Framework test and update
- [ ] Framework documentation update
- [ ] Provide YAML workflow templates    

---

## 🤝 Contributing

PRs and suggestions are welcome!  
Feel free to open an issue if you want new topics covered.

---

## 📜 License

MIT or any license you choose.

---

🎉 **Your HIL CI/CD environment is now ready to build!**

---

<p align="center">
  <img src="https://github.com/user-attachments/assets/f4825882-e285-4e02-a75c-68fc86ff5716" alt="myEmbeddedWayBanner"><br>

</p>

---
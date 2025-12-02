# 📡 Uruchamianie testów HIL z GitHub Actions

![HIL Logo](https://niwciu.github.io/GHA_HIL/main.png)

Witamy w projekcie tutorialowym **Hardware-in-the-Loop (HIL) CI/CD**!
To repozytorium zawiera **materiały, dokumentację, kod źródłowy** oraz **przykłady** używane w serii filmów instruktażowych o uruchamianiu testów rzeczywistego sprzętu wbudowanego przy użyciu **GitHub Actions**.

🎥 **Playlisty wideo:**
[https://www.youtube.com/@MyEmbeddedWay/playlists](https://www.youtube.com/@MyEmbeddedWay/playlists)

---

## 📁 Struktura repozytorium -> TBD

```
.
├── .github/      
│   └── workflows/              # Automatyzacja GitHub Actions
├── docs/                       # Dokumentacja MkDocs
├── hw/                         # Konfiguracje sprzętu dla przykładowego projektu
├── lib/                        # Zewnętrzne biblioteki używane w projekcie
├── src/                        # Kod źródłowy przykładowego projektu
├── test/
│   ├── _config_scripts/        # Skrypty konfiguracyjne dla wszystkich celów projektu
│   ├── template/               # Szablon modułów testów jednostkowych
│   ├── unity/                  # Framework Unity
│   ├── hil_tests/              # Folder z testami HIL
│   └── peripheras_config.yaml  # Plik konfiguracyjny frameworka py-micro-hil
└── README.md                   # Jesteś tutaj 🙂
```

---

## 🚀 Czego się nauczysz

To repozytorium pokaże Ci, jak:

* 🛠 **Skonfigurować Raspberry Pi jako serwer testów HIL**
* 🔌 **Podłączyć Raspberry Pi do ST-Link i mikrokontrolera docelowego**
* 🧪 **Tworzyć automatyczne testy HIL przy użyciu py-micro-hil**
* ⚙️ **Instalować aplikacje ze źródeł**
* 🤖 **Uruchamiać testy rzeczywistego sprzętu w GitHub Actions**
* 📦 **Publikować artefakty testowe i logi**

---

## 📚 Dokumentacja

Cała dokumentacja znajduje się w katalogu `docs/` i jest automatycznie publikowana na GitHub Pages:
[https://niwciu.github.io/GHA_HIL/](https://niwciu.github.io/GHA_HIL/)

### ▶ HIL Fundamentals

* Czym jest HIL?
* Dlaczego stosować HIL w CI/CD?
* Wymagania sprzętowe i programowe

### ▶ Raspberry Pi HIL Server Setup

* Instalacja systemu operacyjnego
* Instalacja stlink
* Instalacja py-micro-hil
* Konfiguracja lighttpd
* Podłączenie RPi do mikrokontrolera

### ▶ Pisanie testów HIL - praca z frameworkiem

* Podstawy API Pythona
* Przykładowe skrypty testowe
* Fixtures i struktura testów
* Debugowanie najczęstszych problemów

### ▶ Integracja z GitHub Actions

* Omówienie struktury workflow
* Automatyczne wgrywanie firmware
* Uruchamianie testów py-micro-hil zdalnie
* Zbieranie logów i artefaktów

### ▶ Projekt przykładowy

* Minimalny firmware
* Zestaw testów HIL
* Pełna linia CI

---

## 🔧 Wymagania

### Sprzęt

* Raspberry Pi 3/4/5
* ST-Link V2/V3
* Mikrokontroler docelowy (STM32 zalecany)
* Kable i zasilanie

### Oprogramowanie

* Raspberry Pi Imager - [https://www.raspberrypi.com/software/](https://www.raspberrypi.com/software/)
* GCC / G++ / CMake / lighttpd
* stlink - [https://github.com/stlink-org/stlink](https://github.com/stlink-org/stlink)
* py-micro-hil - [https://pypi.org/project/py-micro-hil/](https://pypi.org/project/py-micro-hil/)
* GitHub Actions runner (self-hosted)

---

## ▶ Szybki start

TBD

---

## 🧪 Przykładowy workflow GitHub Actions

TBD

---

## 🗂️ Roadmap

* [ ] Publikacja strony MkDocs
* [ ] Aktualizacja dokumentacji
* [ ] Testy frameworka i aktualizacje
* [ ] Dokumentacja frameworka
* [ ] Udostępnienie szablonów workflow YAML

---

## 🤝 Współpraca

PR-y i sugestie są mile widziane!
Możesz też otworzyć issue, jeśli chcesz, aby pojawiły się nowe tematy.

---

## 📜 Licencja

MIT lub dowolna wybrana przez Ciebie.

---

🎉 **Twoje środowisko HIL CI/CD jest gotowe do działania!**

---

---

<p align="center">
  <img src="https://github.com/user-attachments/assets/f4825882-e285-4e02-a75c-68fc86ff5716" alt="myEmbeddedWayBanner"><br>

</p>

---
# 🚀 Krótki poradnik instalacji i konfiguracji serwera testów HIL na Raspberry Pi

Szczegółowa instrukcja wideo dostępna tutaj:
📺 [https://www.youtube.com/@MyEmbeddedWay/playlists](https://www.youtube.com/@MyEmbeddedWay/playlists)

---

## 1. 🧩 Instalacja Raspberry Pi OS Lite na karcie SD

Zalecane oprogramowanie do nagrywania systemu na kartę SD:
[https://www.raspberrypi.com/software/](https://www.raspberrypi.com/software/)

---

## 2. 🔄 Aktualizacja systemu

```bash
sudo apt update && sudo apt upgrade -y
```

---

## 3. 🛠 Instalacja dodatkowych narzędzi

```bash
sudo apt install git cmake make gcc g++ libusb-1.0-0-dev pkg-config -y
```

---

## 4. 🔧 Instalacja narzędzi ST-Link

### 📥 Pobranie stlink

```bash
git clone https://github.com/stlink-org/stlink.git
cd stlink
```

### 🏗 Kompilacja ze źródeł

```bash
sudo make release
```

### 📦 Instalacja stlink

```bash
sudo make install
```

### 🔁 Aktualizacja pamięci podręcznej bibliotek współdzielonych

```bash
sudo ldconfig
```

### 🧪 Sprawdzenie wersji

```bash
st-info --version
st-info --probe
```

---

## 5. 🐍 Instalacja pip

```bash
sudo apt install python3-pip -y
```

---

## 6. ⚙ Instalacja py-micro-hil

```bash
sudo pip install py-micro-hil --break-system-packages
```

### ✔ Weryfikacja instalacji

```bash
hiltest -h
```

---

## 7. 💡 Instalacja lighttpd (serwer WWW)

```bash
sudo apt install lighttpd -y
```

### 📊 Sprawdzenie statusu serwera

```bash
systemctl status lighttpd
```

### ▶ Kontrola usługi

Start:

```bash
sudo systemctl start lighttpd
```

Stop:

```bash
sudo systemctl stop lighttpd
```

Restart:

```bash
sudo systemctl restart lighttpd
```

### 🔍 Sprawdzenie autostartu

```bash
systemctl is-enabled lighttpd
```

### ⚙ Włączenie autostartu

```bash
sudo systemctl enable lighttpd
```

---

## 8. 📁 Poprawa uprawnień katalogu WWW

```bash
sudo chown -R $USER:$USER /var/www/html
```

---

## 9. 👤 Dodanie użytkownika do grup dostępu do peryferiów

```bash
sudo usermod -aG gpio,i2c,spi,dialout $USER
```

*(Wymagane ponowne logowanie lub restart.)*

---

## 10. 🛠 Włączenie interfejsów sprzętowych

Otwórz narzędzie konfiguracji Raspberry Pi:

```bash
sudo raspi-config
```

Następnie włącz:

* **Interface Options → SPI → Enable**
* **Interface Options → I2C → Enable**
* **Interface Options → Serial Port → Enable**

  * Disable login shell → **Yes**
  * Enable serial port hardware → **Yes**

---

## 11. 🔄 Restart systemu

```bash
sudo reboot
```

---

🎉 **Twój serwer testów HIL na Raspberry Pi jest w pełni skonfigurowany!**

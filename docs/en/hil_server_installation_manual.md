# 🚀 Short Manual for Installing & Configuring HIL Test Server on Raspberry Pi

Detailed video instruction can be found here:
📺 [https://www.youtube.com/@MyEmbeddedWay/playlists](https://www.youtube.com/@MyEmbeddedWay/playlists)

---

## 1. 🧩 Install Raspberry Pi OS Lite on SD Card

Recommended software for flashing the SD card:
[https://www.raspberrypi.com/software/](https://www.raspberrypi.com/software/)

---

## 2. 🔄 Update System

```bash
sudo apt update && sudo apt upgrade -y
```

---

## 3. 🛠 Install Additional Tools

```bash
sudo apt install git cmake make gcc g++ libusb-1.0-0-dev pkg-config -y
```

---

## 4. 🔧 Install ST-Link Tools

### 📥 Download stlink

```bash
git clone https://github.com/stlink-org/stlink.git
cd stlink
```

### 🏗 Build from source

```bash
sudo make release
```

### 📦 Install stlink

```bash
sudo make install
```

### 🔁 Update shared-library cache

```bash
sudo ldconfig
```

### 🧪 Check version

```bash
st-info --version
st-info --probe
```

---

## 5. 🐍 Install pip

```bash
sudo apt install python3-pip -y
```

---

## 6. ⚙ Install py-micro-hil

```bash
sudo pip install py-micro-hil --break-system-packages
```

### ✔ Verify installation

```bash
hiltest -h
```

---

## 7. 💡 Install lighttpd (Web Server)

```bash
sudo apt install lighttpd -y
```

### 📊 Check current status

```bash
systemctl status lighttpd
```

### ▶ Control the service

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

### 🔍 Check if lighttpd autostarts

```bash
systemctl is-enabled lighttpd
```

### ⚙ Enable autostart

```bash
sudo systemctl enable lighttpd
```

---

## 8. 📁 Fix Web Directory Permissions

```bash
sudo chown -R $USER:$USER /var/www/html
```

---

## 9. 👤 Add User to Peripheral Access Groups

```bash
sudo usermod -aG gpio,i2c,spi,dialout $USER
```

*(Re-login or reboot required.)*

---

## 10. 🛠 Enable Hardware Interfaces

Open Raspberry Pi configuration tool:

```bash
sudo raspi-config
```

Then enable:

* **Interface Options → SPI → Enable**
* **Interface Options → I2C → Enable**
* **Interface Options → Serial Port → Enable**

  * Disable login shell → **Yes**
  * Enable serial port hardware → **Yes**

---

## 11. 🔄 Reboot the System

```bash
sudo reboot
```

---

🎉 **Your Raspberry Pi HIL test server is now fully configured!**

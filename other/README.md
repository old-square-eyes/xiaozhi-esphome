
# Flashing the Original Xiaozhi-ESP32 AI Firmware

## 1. Install ESP-IDF

Download **ESP-IDF 5.4 or above** from [Espressif Downloads](https://dl.espressif.com/dl/esp-idf/).
Install and open the **ESP-IDF PowerShell**.

---

## 2. Clone the Official Repository

```bash
git clone https://github.com/78/xiaozhi-esp32
```

This command downloads the official source.
After it completes, change into the directory created (default path shown below—adjust if yours is different):

```bash
cd C:\Espressif\frameworks\esp-idf-v5.4.1\xiaozhi-esp32
```

---

## 3. Set Target Device

```bash
idf.py set-target esp32s3
```

---

## 4. Configure Device Settings

```bash
idf.py menuconfig
```

This command opens the configuration tool where you can set the language, board type, and wake word.

Navigate to **Xiaozhi Assistant**:

<img width="362" height="286" alt="Screenshot 2025-07-23 at 17 12 01" src="https://github.com/user-attachments/assets/f1a31fd6-c489-4216-a0fe-bd561a4d8034" />

* **Default Language:** Change from Chinese to English if desired.
* **Board Type:** Select `Spotpear ESP32-S3-1.28-BOX` *(example for BALL V2)*.

> **Note:**
> The "WeChat" option will change the interface from a single emoji in the middle to a chat-like interface.
> This is best for square displays, but not ideal for round displays.

<img width="485" height="261" alt="Screenshot 2025-07-23 at 17 12 36" src="https://github.com/user-attachments/assets/b36cb999-da2f-4982-84c5-35979489cdd5" />

* **To change the wake word:**
  Go to:
  `ESP Speech Recognition` → `Load Multiple Wake Words (WakeNet9)`

<img width="378" height="279" alt="Screenshot 2025-07-23 at 17 12 50" src="https://github.com/user-attachments/assets/de8b5717-4278-4994-9eeb-5f24639bbd00" />

* Select your preferred wake word.

<img width="393" height="623" alt="Screenshot 2025-07-23 at 17 13 30" src="https://github.com/user-attachments/assets/45c2069f-dc37-4f8e-824b-c565fbb4bc09" />

---

Once you're done, press <kbd>Esc</kbd> to exit `menuconfig`, and choose **Yes** to save your settings.

---

## 5. Build the Firmware

```bash
idf.py build
```

---

## 6. Flash the Firmware

```bash
idf.py -p COM5 flash
```

> Replace `COM5` with the correct port for your device.

This will flash the firmware to your USB-connected device and automatically restart it.
You’re done! 🎉

---

## Reflashing or Changing Settings

If you want to change settings or flash again, simply repeat these three commands:

```bash
idf.py menuconfig
idf.py build
idf.py -p COM5 flash
```

---

## Pull latest version from repo

To pull latest version from the xiaozhi-esp32 repo simply do a git pull from inside the xiaozhi-esp32 directory:

```bash
git pull
```


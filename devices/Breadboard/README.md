
## DIY Breadboard Compatibility – Spotgear Ball v1

DIY breadboard devices will work with the Spotpear Ball v1 firmware if you wire them using the following pin assignments:

ESP32-S3 N16R8 Developer module:
https://www.aliexpress.com/item/1005006002965361.html

INMP441 Microphone:
https://www.aliexpress.com/item/1005003340565935.html

MAX98357 Amplifier for speaker:
https://www.aliexpress.com/item/1005006382608935.html

Display of choice: (only round 1.28" is compatible with Ball v1 code, other displays needs change of code)

1.28" Round: https://www.aliexpress.com/item/1005006111616872.html

2.4" Square: https://www.aliexpress.com/item/1005006624846563.html

Connections:

### 🎤 INMP441 Microphone

| Pin | Connection |
| --- | ---------- |
| VDD | 3.3V       |
| GND | GND        |
| WS  | GPIO4      |
| SCK | GPIO5      |
| SD  | GPIO6      |
| L/R | GND        |

---

### 🔊 MAX98357 Amplifier

| Pin  | Connection |
| ---- | ---------- |
| VIN  | 3.3V       |
| GND  | GND        |
| DIN  | GPIO7      |
| BLCK | GPIO15     |
| LRC  | GPIO16     |
| GAIN | GND        |

---

### 🖥️ 1.28" Round RGB Display (GC9A01, 240×240, SPI)

| Pin | Connection |
| --- | ---------- |
| VCC | 3.3V       |
| GND | GND        |
| SCL | GPIO14     |
| SDA | GPIO17     |
| DC  | GPIO10     |
| CS  | GPIO13     |
| RST | GPIO18     |

---

### 🖥️ Alternative (will need to edit code for ball v1) 2.4" Square RGB Display (ILI9341, 320×240, SPI)

| Pin | Connection |
| --- | ---------- |
| VCC      | 3.3V       |
| GND      | GND        |
| SCK      | GPIO14     |
| SDI(mosi)| GPIO17     |
| D/C      | GPIO10     |
| CS       | GPIO13     |
| RESET    | GPIO18     |
| LED      | GPIO3      |

---

### 🧠 Other Components

| Component | GPIO   |
| --------- | ------ |
| Button      | GPIO0  |
| Onboard LED | GPIO48 |

---



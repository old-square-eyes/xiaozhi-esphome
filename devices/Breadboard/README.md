
## DIY Breadboard Compatibility – Spotgear Ball v1

DIY breadboard devices will work with the Spotgear Ball v1 firmware if you wire them using the following pin assignments:

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

### 🖥️ Round RGB Display (GC9A01, 240×240, SPI)

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

### 🧠 Other Components

| Component | GPIO   |
| --------- | ------ |
| Button    | GPIO0  |
| LED       | GPIO48 |

---



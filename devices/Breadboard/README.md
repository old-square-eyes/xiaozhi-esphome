o
## Speakerbox project
![20250622_142135](https://github.com/user-attachments/assets/8d0e4a0f-259d-4263-8972-b5bf33dd5540)
https://makerworld.com/en/models/1475284-a-i-speakerbox-for-xiaozhi-a-i-or-home-assistant

## DIY Breadboard Compatibility
---



ESPHome / Home Assistant:
Use yaml for breadboard with options for setting screen size/type (round 1.28" or square 2.4" as used in the speakerbox makerworld project).

Xiaozhi AI:
Using same pins will also be compatible with the Xiaozhi firmware for breadboard. (with minor modification of 1 file, but that's another topic)

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
| Button      | GPIO0 (to GND) |
| Onboard LED | GPIO48 |

---

### 🧠 parts used

ESP32-S3 N16R8 Developer module:
https://www.aliexpress.com/item/1005006002965361.html

INMP441 Microphone:
https://www.aliexpress.com/item/1005003340565935.html

MAX98357 Amplifier for speaker:
https://www.aliexpress.com/item/1005006382608935.html

Speaker:
https://www.aliexpress.com/item/32593991938.html

Display of choice: (2.4" for the speakerbox 3d print.)

1.28" Round: https://www.aliexpress.com/item/1005006111616872.html

2.4" Square: https://www.aliexpress.com/item/1005006624846563.html

And a Button & Powercable:

Button: https://www.aliexpress.com/item/1005006889252643.html

Powercable: https://www.aliexpress.com/item/1005007569336813.html

And of course a Breadboard if you are going that way :)
---

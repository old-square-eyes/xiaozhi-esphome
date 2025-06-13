
# XIAOZHI-ESPHOME

**Use your Xiaozhi AI devices in ESPHome as voice assistants for Home Assistant.**

(fully working with on-device wake word and custom graphics.)

![Xiaozhi Device](https://github.com/user-attachments/assets/8e66a3d6-527b-4047-9f0c-fb7c9cb2490f)

By request, this GitHub project provides a simple way to use Xiaozhi-based devices with ESPHome. These compact devices can serve as voice assistants integrated with Home Assistant.

## 🚀 Quick Start Guide

### Step-by-step Installation:

1. **Connect your device** to your computer via USB. Open [ESPHome Web](https://web.esphome.io), click “**+ NEW DEVICE**”, and follow the prompts to set it up and connect it to Wi-Fi.
2. In ESPHome, **take over the newly discovered device**, edit the configuration, paste in the code for your device but keep the original device `name`. (You can customize the `friendly_name` as desired.)
3. **Save and install** the configuration **wirelessly**. Wait for it to reboot and begin running your code.
4. Once it’s online, go to **Home Assistant > Devices**, and **accept the new device**. This will start the voice assistant setup process.

> **Note for Step 3:**
> If wireless installation fails and you're prompted to use USB flashing:
>
> * Reconnect the device to your computer if needed.
> * Save and install again, choose “Plug into this computer,” wait for the firmware to compile, download, and use ESPHome Web to install it via USB.
>   This only happens the first time, when the partition table needs to be updated. Future updates can be done wirelessly.

## ✅ Supported Devices (so far)

* Spotpear Ball v1
* Spotpear Ball v2
* Spotpear Muma v1

  > *Muma v2 will follow soon.

## 🛒 Where to Buy

V1 V2 Ball https://vi.aliexpress.com/item/1005008627679270.html 】muma https://vi.aliexpress.com/item/1005008884232596.html

You can find these and many similar devices on AliExpress by searching:
**`deepseek xiaozhi`**

---EOF



# XIAOZHI-ESPHOME

**Use your Xiaozhi AI devices in ESPHome as voice assistants for Home Assistant.**

(fully working with on-device wake word and custom graphics.)

![20250614_195218](https://github.com/user-attachments/assets/5d364985-a4ce-4b49-bf03-af7ce22bbc35)
![Xiaozhi Device](https://github.com/user-attachments/assets/8e66a3d6-527b-4047-9f0c-fb7c9cb2490f)
![identify your model](https://github.com/user-attachments/assets/4aa49b9e-ab2c-4949-aefc-9d51ecf6ac40)


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

* Spotpear Puck

## 🛒 Where to Buy

Ball v1 & v2 https://vi.aliexpress.com/item/1005008627679270.html

Muma v2 https://vi.aliexpress.com/item/1005008884232596.html

You can find these and many similar devices on AliExpress by searching:
**`deepseek xiaozhi`**

---EOF


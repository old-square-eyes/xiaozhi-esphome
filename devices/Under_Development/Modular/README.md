
<img width="1600" height="950" alt="esphome-yaml-layout-pro-v8" src="https://github.com/user-attachments/assets/92c246d2-295a-4a11-8c03-87963034dcd6" />

This section is for those that tried the standard full yaml in the respective directories and everything works, but want more ;)

Those that just want the basics code to modify, might find it easier to use the non-modular yamls.

👉 If you try this and run into problems, please revert to the known working non-modular YAMLs.
And if you believe the issue isn’t just user error, please report back. 😉

---

```markdown
## 🚀 Installation

1. Copy the YAML for your device (e.g. `Muma.yaml`) into your **ESPHome** configuration.  
   - Keep your own `name:` and `friendly_name:` values.  

2. Install the firmware to your device.  

3. (Optional) Update the **settings** section of the YAML if you want to:  
   - Change the `imagemodel`  
   - Change the `startup_sound`  

4. The **clockbackground** can be set directly from **Home Assistant (HA)**.

After this, if there is a update, all you need to do is compile again.
```

---

### Modular core v1.01
- **Fixes**  
  - fixed timer widget, fixed clock screensaver so it doesn't go on when timer is running
  - fixed so it also doesnt show clock until api image timer is done.
- **Changes**  
  - changed font for default clock from 30 to 42, and date font from 18 to 22
  - changed timer widget to new design. and removed 1 font (more memory saving ;)
  - removed removed 1 font, saved memory
  - moved micro wake words to main and left only "okay nabu" in core, this gives a wider selection of mmw's without loading all

## Previous Changes (before resetting to Modular 1.00)

### Version 1.06 (dev)
- **Fixes**  
  - Media player buffer set to `250000`  
  - Speaker WAV, mono  
  - Removed `handle_screen_tap` from touchscreen section  

### Version 1.05 (dev)
- Show image API got its own timer  
- Added block so images only display in *idle* or *replying* phase  
- Added switch for time  
- Added clock wallpaper  

### Version 1.04 (dev)
- **Added:** Online clock wallpaper with select in HA  
- **New API service** to send images from HA:

```yaml
service: esphome.esphome_web_0bac48_show_fullscreen_image
data:
  url: "http://homeassistant.local:8123/local/funny.png"
````

### Version 1.03 (dev)

* Minor memory fixes
* Clock select from HA
* Removed one font (req/res font same)
* Removed `alpha_channel`

### Version 1.02 (dev)

* Cleanup and fixes

### Version 1.01 (dev)

* **Added:** Clock when idle for more than 10 seconds
* **Added:** Virtual touch (same functionality as touch available from HA: start, stop, stop timer alarm)
* **Added:** Use original `playing.png` emo when playing music on media player (still reverts to clock after 30s)
* **Added:** Timer ringing entity (can trigger automations)
* **Added:** Longer request/response entities for dashboards (limit 255 characters)
* **Fix:** Timer pages now dynamic for different screen sizes

### Version 1.00

* First working code ✅


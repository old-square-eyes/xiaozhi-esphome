# Customized ESPHome Fork for Waveshare 3.49" Blue

This repository is a thinned, single-device fork configured specifically for the **Waveshare ESP32-S3 Touch-LCD 3.49" (640x172)** voice assistant satellite for Home Assistant.

## 📁 Repository Structure

- `esphome.yaml`: Main ESPHome entry configuration for Waveshare 3.49" Blue. Uses local includes so your changes take effect immediately.
- `config/`: Local modular configuration files:
  - `core.yaml`: Core voice assistant pipeline, state machine, and display management.
  - `clocks-wide.yaml`: Wide display clock styles and wallpaper handlers.
  - `display_pages.yaml`: Page layouts for the 640x172 resolution display.
  - `hw/waveshare_349_hw.yaml`: Hardware definitions (I2C, I2S audio, ES8311 DAC, ES7210 ADC, AXS15231 touch, SPI display, backlight).
- `images/`: Curated 640x172 image assets (`Alfred`, `Gwen`, `Jarvis`, `Other`, `Salem`, `Sarah`).
- `sounds/`: Audio notifications and sound clips (FLAC format).
- `MicroWakeWords/`: Micro wake word models (`okay_nabu`, `hey_jarvis`, `alexa`, `hey_sarah`).

## 🚀 Usage & Customization

1. Open **ESPHome** (via Home Assistant ESPHome add-on or ESPHome CLI).
2. Point your device build to `esphome.yaml`.
3. Customize WiFi, model choices, startup sounds, or entities directly in `esphome.yaml`:
   - `startup_sound`: `Home_Connected`, `Home_Connected_Male`, `Computer_Ready`, `available`
   - `imagemodel`: `Sarah`, `Alfred`, `Gwen`, `Jarvis`
   - `clock_background_image`: `waves`, `clock`, `hacker`, `mission`, `starrysky`
4. Because `esphome.yaml` uses local includes (`!include config/core.yaml`, etc.), any edits you make in `config/` apply directly without pulling from GitHub!

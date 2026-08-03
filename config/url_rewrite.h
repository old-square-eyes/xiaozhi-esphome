#pragma once

#include "esphome/core/log.h"
#include "esphome/components/media_player/media_player.h"

class UrlRewriterMediaPlayer : public esphome::media_player::MediaPlayer {
 public:
  esphome::media_player::MediaPlayer *target{nullptr};

  UrlRewriterMediaPlayer(esphome::media_player::MediaPlayer *target) : target(target) {}

  esphome::media_player::MediaPlayerTraits get_traits() override {
    if (this->target) return this->target->get_traits();
    return esphome::media_player::MediaPlayerTraits();
  }

  void control(const esphome::media_player::MediaPlayerCall &call) override {
    if (!this->target) return;
    
    auto new_call = this->target->make_call();
    
    if (call.get_media_url().has_value()) {
      std::string url = *call.get_media_url();
      ESP_LOGI("url_rewrite", "Received Media/TTS URL: %s", url.c_str());
      
      size_t pos = url.find("your-ha-domain.com");
      if (pos != std::string::npos) {
        if (url.find("https://your-ha-domain.com:8123/") == 0) {
          url.replace(0, 27, "http://192.168.1.100:8123/");
        } else if (url.find("https://your-ha-domain.com/") == 0) {
          url.replace(0, 22, "http://192.168.1.100:8123/");
        } else if (url.find("http://your-ha-domain.com:8123/") == 0) {
          url.replace(0, 26, "http://192.168.1.100:8123/");
        } else if (url.find("http://your-ha-domain.com/") == 0) {
          url.replace(0, 21, "http://192.168.1.100:8123/");
        }
        ESP_LOGI("url_rewrite", "--> Rewritten URL: %s", url.c_str());
      } else {
        ESP_LOGI("url_rewrite", "URL did not contain your-ha-domain.com");
      }
      new_call.set_media_url(url);
    }
    
    if (call.get_volume().has_value()) new_call.set_volume(*call.get_volume());
    if (call.get_command().has_value()) new_call.set_command(*call.get_command());
    if (call.get_announcement().has_value()) new_call.set_announcement(*call.get_announcement());
    
    new_call.perform();
  }
};

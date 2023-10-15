    #define COMMON_WIFI_PWD "********"

  #define SSID1 "*****"
  #define PWD1 "******"
  #define SSID2 "*****"
  #define PWD2 "*****"
  #define SSID3 "*****"
  #define PWD3 "*****"

#if defined(CAMERA_MODEL_WROVER_KIT)
#define ServerName "esp32wrovercam"
#elif defined(CAMERA_MODEL_AI_THINKER)
#define ServerName "esp32-AAB590"
#elif defined(CAMERA_MODEL_IR_SENSOR)
#define ServerName "esp32ircam"
#else
#define ServerName "esp32cam"
#endif

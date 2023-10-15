    #define COMMON_WIFI_PWD "81249022"

  #define SSID1 "E24_Ext"
  #define PWD1 "sameer007"
  #define SSID2 "Elly"
  #define PWD2 "sameer007"
  #define SSID3 "Elly_EXT"
  #define PWD3 "sameer007"

#if defined(CAMERA_MODEL_WROVER_KIT)
#define ServerName "esp32wrovercam"
#elif defined(CAMERA_MODEL_AI_THINKER)
#define ServerName "esp32-AAB590"
#elif defined(CAMERA_MODEL_IR_SENSOR)
#define ServerName "esp32ircam"
#else
#define ServerName "esp32cam"
#endif
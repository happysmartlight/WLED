#pragma once

/*
 * Welcome!
 * You can use the file "my_config.h" to make changes to the way WLED is compiled!
 * It is possible to enable and disable certain features as well as set defaults for some runtime changeable settings.
 *
 * How to use:
 * PlatformIO: Just compile the unmodified code once! The file "my_config.h" will be generated automatically and now you can make your changes.
 *
 * ArduinoIDE: Make a copy of this file and name it "my_config.h". Go to wled.h and uncomment "#define WLED_USE_MY_CONFIG" in the top of the file.
 *
 * DO NOT make changes to the "my_config_sample.h" file directly! Your changes will not be applied.
 */

// uncomment to force the compiler to show a warning to confirm that this file is included
//#warning **** my_config.h: Settings from this file are honored ****

/* Uncomment to use your WIFI settings as defaults
  //WARNING: this will hardcode these as the default even after a factory reset
#define CLIENT_SSID "Your_SSID"
#define CLIENT_PASS "Your_Password"
*/

#define MAX_LEDS 4000       // Maximum total LEDs. More than 1500 might create a low memory situation on ESP8266.
#define MDNS_NAME "hsl"    // mDNS hostname, ie: *.local
#define SERVERNAME "ARGB" // HTTP server description
#define WLED_PIN "1907"    // PIN for settings pages

#define WLED_BRAND "ARGB"
#define WLED_PRODUCT_NAME "ARGB HSL Controller"
#define WLED_AP_SSID     "ARGB-AP"
#define WLED_AP_PASS     "argb1234"

#define WLED_OTA_PASS    "argbota"

#define WLED_VERSION 2.0_HSL_IPEX

#define CLIENT_SSID "OLIVE BERRY 2.4G" // Your WIFI SSID
#define CLIENT_PASS "zxcvbnm@123" // Your WIFI password

#define WLED_MAX_BUTTONS 1   // Maximum number of buttons (2 on ESP32, 4 on other boards by default)

#ifndef _DPSOFTWARE_CONFIG_H
#define _DPSOFTWARE_CONFIG_H

#include <ESP8266WiFi.h>
#include <Adafruit_SSD1306.h>


// Serial rate for debug
#define SERIAL_RATE 500000
// Specify if you want to use a display or only Serial
const bool PRINT_TO_DISPLAY = false;
// Display specs
#define OLED_RESET LED_BUILTIN // Pin used for integrated D1 Mini blue LED
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
extern Adafruit_SSD1306 display;

// SENSORNAME will be used as device network name
#define WIFI_DEVICE_NAME "ambilight"
// GATEWAY IP
#define IP_GATEWAY IPAddress(192, 168, 1, 1);
// STATIC IP FOR THE MICROCONTROLLER
#define IP_MICROCONTROLLER IPAddress(192, 168, 1, 52);
// Port for the OTA firmware uplaod
const int OTA_PORT = 8266;
// Set wifi power in dbm range 0/0.25, set to 0 to reduce PIR false positive due to wifi power, 0 low, 20.5 max.
const double WIFI_POWER = 0;
// MQTT server port
const int mqtt_port = 1883;
// Maximum number of reconnection (WiFi/MQTT) attemp before powering off peripherals
#define MAX_RECONNECT 50
// Maximum JSON Object Size
#define MAX_JSON_OBJECT_SIZE 20

#endif

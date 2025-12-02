#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define PIN_RGB_LED 8
// BUILTIN_LED can be used in new Arduino API digitalWrite() like in Blink.ino
static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT + PIN_RGB_LED;
#define BUILTIN_LED LED_BUILTIN  // backward compatibility
#define LED_BUILTIN LED_BUILTIN  // allow testing #ifdef LED_BUILTIN
// RGB_BUILTIN and RGB_BRIGHTNESS can be used in new Arduino API rgbLedWrite()
#define RGB_BUILTIN    LED_BUILTIN
#define RGB_BRIGHTNESS 64

static const uint8_t TX = 16;
static const uint8_t RX = 17;

static const uint8_t SDA = 14;
static const uint8_t SCL = 15;

static const uint8_t SS = 18;
static const uint8_t MOSI = 19;
static const uint8_t MISO = 20;
static const uint8_t SCK = 21;

static const uint8_t A0 = 0;
static const uint8_t A1 = 1;
static const uint8_t A2 = 2;
static const uint8_t A3 = 3;
static const uint8_t A4 = 4;
static const uint8_t A5 = 5;
static const uint8_t A6 = 6;

static const uint8_t D0 = 0;
static const uint8_t D1 = 1;
static const uint8_t D2 = 2;
static const uint8_t D3 = 3;
static const uint8_t D4 = 4; 
static const uint8_t D5 = 5; 
static const uint8_t D6 = 22;
static const uint8_t D7 = 21;
static const uint8_t D8 = 20; 
static const uint8_t D9 = 19;
static const uint8_t D10 = 18;
static const uint8_t D11 = 15; 
static const uint8_t D12 = 14; 
static const uint8_t D13 = 8; 
static const uint8_t D14 = 6; 
static const uint8_t D15 = 7;
static const uint8_t D16 = 16; 
static const uint8_t D17 = 17; 
static const uint8_t D18 = 9;
static const uint8_t D19 = 23;
static const uint8_t D20 = 12;
static const uint8_t D21 = 13;

// LP I2C Pins are fixed on ESP32-C6
#define WIRE1_PIN_DEFINED
static const uint8_t SDA1 = 6;
static const uint8_t SCL1 = 7;

#endif /* Pins_Arduino_h */

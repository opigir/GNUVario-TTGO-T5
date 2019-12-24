#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_custom_post_type
const unsigned char gridicons_custom_post_type[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xF0, 0x00, 0x0F, 0xE0, 0x00, 0x07, 0xE0, 
0x00, 0x07, 0xE0, 0x07, 0xC7, 0xE0, 0x07, 0xC7, 
0xE1, 0x07, 0xC7, 0xE1, 0x07, 0xC7, 0xE3, 0x87, 
0xC7, 0xE7, 0xC0, 0x07, 0xE7, 0xC0, 0x07, 0xE0, 
0x00, 0x07, 0xE0, 0x0E, 0x07, 0xE0, 0x1F, 0x07, 
0xE0, 0x1F, 0x07, 0xE0, 0x1F, 0x07, 0xE0, 0x0E, 
0x07, 0xE0, 0x00, 0x07, 0xF0, 0x00, 0x0F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

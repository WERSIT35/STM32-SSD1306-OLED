#ifndef SSD1306_H_
#define SSD1306_H_

#include "stm32l0xx_hal.h"
#include <string.h>

// Default SSD1306 I2C Address (0x3C << 1)
#define SSD1306_I2C_ADDR 0x78  // use 0x7A if module is 0x3D

// Extern global I2C handle from main.c
extern I2C_HandleTypeDef hi2c1;

void SSD1306_Init(void);
void SSD1306_Clear(void);
void SSD1306_AllOn(void);
void SSD1306_DisplayOn(void);
void SSD1306_DisplayOff(void);
void SSD1306_SetCursor(uint8_t x, uint8_t y);
void SSD1306_WriteString(char *str);

#endif

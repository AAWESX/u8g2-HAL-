#ifndef __STM32_U8G2_H
#define __STM32_U8G2_H

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "u8g2.h"
#include "tim.h"
#include "i2c.h"
/* USER CODE BEGIN Includes */

#define IIC_SWITCH 2 //iic HAL硬件IIC序号 I2C1 （1） I2C2（2）

#if IIC_SWITCH == 1

#define MX_I2C_Init  MX_I2C1_Init //I2C1初始化
#define hi2cX        hi2c1

#endif

#if IIC_SWITCH == 2

#define MX_I2C_Init  MX_I2C2_Init //I2C2初始化
#define hi2cX        hi2c2

#endif


/* USER CODE END Includes */
 
 
 
/* USER CODE BEGIN Private defines */
 
/* USER CODE END Private defines */
#define u8         unsigned char
#define MAX_LEN    128  //
#define OLED_ADDRESS  0x78 // oled
#define OLED_CMD   0x00  // 
#define OLED_DATA  0x40  // 
 
/* USER CODE BEGIN Prototypes */
uint8_t u8x8_byte_hw_i2c(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
uint8_t u8x8_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
void u8g2Init(u8g2_t *u8g2);
void draw(u8g2_t *u8g2);
void testDrawPixelToFillScreen(u8g2_t *u8g2);
 
#endif



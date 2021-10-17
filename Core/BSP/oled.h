#ifndef __OLED_H
#define __OLED_H

#define OLED_ADDRESS 0x78
#define oledi2c hi2c1
#define OLED_I2C_Init() MX_I2C1_Init()
uint8_t u8x8_byte_hw_i2c(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
extern uint8_t u8x8_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
extern void u8g2Init(u8g2_t *u8g2);
#endif

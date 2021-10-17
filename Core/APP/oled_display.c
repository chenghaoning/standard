#include "MyApplication.h"

u8g2_t u8g2;
void oled_init(void )
{
    u8g2Init(&u8g2);
    u8g2_ClearBuffer(&u8g2);
}


#pragma once

#include_next <halconf.h>

#undef HAL_USE_SPI
#define HAL_USE_SPI TRUE

#undef HAL_USE_PWM
#define HAL_USE_PWM TRUE
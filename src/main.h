#pragma once

#include "stm32l0xx_hal.h"

#define LED_PIN     GPIO_PIN_3
#define LED_GPIO_PORT   GPIOB
#define LED_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOB_CLK_ENABLE()

#pragma once

#include "system.h"

class MyPin {
    private:
        GPIO_TypeDef *gpiox;
        uint32_t pin_number;
        GPIO_InitTypeDef GPIO_Init;
    public:
        MyPin(GPIO_TypeDef *gpioPort, uint32_t pin);
        void ConfigureOutput();
        void Toggle();
        MyPin operator =(GPIO_PinState pinState);
};
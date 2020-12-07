#include "system.h"
#include "pin.h"

MyPin::MyPin(GPIO_TypeDef *gpioPort, uint32_t pin) {
    gpiox = gpioPort;
    pin_number = pin;
}

void MyPin::ConfigureOutput() {
    GPIO_Init.Pin = pin_number;
    GPIO_Init.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_Init.Pull = GPIO_PULLUP;
    GPIO_Init.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(gpiox, &GPIO_Init);
}

void MyPin::Toggle() {
    HAL_GPIO_TogglePin(gpiox, pin_number);
}

MyPin MyPin::operator =(GPIO_PinState pinState) {
    HAL_GPIO_WritePin(gpiox, pin_number, pinState);
    return (*this);
}

#include "system.h"
#include "program.h"

Program::Program() : userLed(LED_GPIO_PORT, LED_PIN)
{
    // Any other construction
}

void Program::Startup() {
    // Startup GPIO Clk
    LED_GPIO_CLK_ENABLE();

    userLed.ConfigureOutput();
}

void Program::MainLoop(){
    // Cycle pin state
    while(1) {
        userLed = GPIO_PinState::GPIO_PIN_SET;
        Wait(250);
        userLed = GPIO_PinState::GPIO_PIN_RESET;
        Wait(750);
    }
}

void Program::Wait(uint32_t delay_ms)
{
    HAL_Delay(delay_ms);
}

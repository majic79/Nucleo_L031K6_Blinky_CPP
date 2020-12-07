#include "system.h"
#include "pin.h"

#define LED_PIN     GPIO_PIN_3
#define LED_GPIO_PORT   GPIOB
#define LED_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOB_CLK_ENABLE()

class Program {
    private:
        MyPin userLed;
    public:
        Program();
        void Startup();
        void MainLoop();
        void Wait(uint32_t delay_ms);
};
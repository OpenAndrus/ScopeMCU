#include "gpio.h"

void led_setValue(bool enable) {
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, enable ? GPIO_PIN_RESET : GPIO_PIN_SET);
}

void led_toggle() {
    HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
}

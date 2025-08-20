#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

int main() {
    stdio_init_all();

    const uint LED = PICO_DEFAULT_LED_PIN;
    gpio_init(LED);
    gpio_set_dir(LED, GPIO_OUT);

    while (true) {
        gpio_put(LED, 1);
        printf("LED ON\n");
        sleep_ms(500);

        gpio_put(LED, 0);
        printf("LED OFF\n");
        sleep_ms(500);
    }
}

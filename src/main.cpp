#include <stdio.h>
#include "pico/stdlib.h"

#define ONBOARD_LED 25

int main()
{
    stdio_init_all();
    printf("Simple C/CPP Template\n");
    gpio_init(ONBOARD_LED);
    gpio_set_dir(ONBOARD_LED, GPIO_OUT);
    while (1)
    {
        gpio_put(ONBOARD_LED, 0);
        sleep_ms(800);
        gpio_put(ONBOARD_LED, 1);
        sleep_ms(200);
    }
}

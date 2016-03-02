#include "mbed.h"
/* 
 * All the LEDs on the micro:bit are part of the LED Matrix,
 * In order to get simple blinking behaviour, we set column 0
 * to be permanently at ground. If you want to use the LEDs as
 * a screen, there is a display driver in the micro:bit 'DAL',
 */
DigitalOut col0(P0_4, 0);

DigitalOut myled(P0_13);

int main() {
    while(1) {
        myled = 1;
        wait(0.2);
        myled = 0;
        wait(0.2);
    }
}

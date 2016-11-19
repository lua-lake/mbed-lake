#include "mbed.h"
#include "derp.h"
#include "foo.h"

DigitalOut myled(LED1);

int main() {
    derp();

    while(1) {
        myled = 1;
        wait(0.2);
        myled = 0;
        wait(0.2);
    }
}

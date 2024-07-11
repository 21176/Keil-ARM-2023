//Write an ARM embedded C program to form a chasing LED pattern with eight LEDs using Keil simulator.
#include <LPC21xx.H>

void delay() {
    int count;
    for (count = 0; count <= 1000; count++);
}

int main() {
    int i; 
    IODIR0 |= 0xFF << 10; // Setting P0.10 to P0.17 as outputs

    while (1) {
        for (i = 0; i < 8; i++) {
            IOSET0 |= (1 << (10 + i)); // Turning on LED
            delay();
            IOCLR0 |= (1 << (10 + i)); // Turning off LED
        }
    }

    return 0;
}


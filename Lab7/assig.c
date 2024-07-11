#include <LPC21xx.H>

void delay() {
    int count;
    for (count = 0; count <= 1000; count++);
}

int main() {
    IODIR0 |= (0xFF << 10);
    IODIR0 &= ~(1 << 1); // Clear bit 1 to make it an input
    int i;

    while (1) {
        if (IOPIN0 & (1 << 1)) {
            for (i = 0; i < 8; i++) {
                IOSET0 |= (1 << (10 + i));
                delay();
                IOCLR0 |= (1 << (10 + i));
            }
        } else {
            for (i = 7; i >= 0; i--) {
                IOSET0 |= (1 << (10 + i));
                delay();
                IOCLR0 |= (1 << (10 + i));
            }
        }
    }
    return 0;
}

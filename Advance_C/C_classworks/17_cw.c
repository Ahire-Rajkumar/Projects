#include <stdio.h>

int swapNibbles(unsigned int x) {
    return ((x & 0x0F) << 4 | (x & 0xF0) >> 4);
}

int main() {
    unsigned int num;
    printf("Enter the hexadecimal value : ");
    scanf("%x", &num);
    printf("After swap : %X\n", swapNibbles(num));

    return 0;
}


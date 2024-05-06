#include <stdio.h>

struct NibbleSwap {
    unsigned int nib1 : 4;
    unsigned int nib2 : 4;
};

int main() {
    struct NibbleSwap hex;
    unsigned char input, temp;

    printf("Enter the hexa-decimal value : ");
    scanf("%c", &input);

    // Extracting nibbles from the input
    hex.nib1 = input >> 4;
    hex.nib2 = input & 0x0F;

    // Swapping the nibbles
    temp = hex.nib1;
    hex.nib1 = hex.nib2;
    hex.nib2 = temp;

    // Combining the nibbles to form the swapped value
    unsigned char swapped = (hex.nib1 << 4) | hex.nib2;

    printf("After swap nibble : %c%c\n", hex.nib1, hex.nib2);

    return 0;
}


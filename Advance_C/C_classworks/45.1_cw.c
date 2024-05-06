#include <stdio.h>

typedef struct {
    unsigned int nibble1 : 4; // Lower nibble
    unsigned int nibble2 : 4; // Upper nibble
} Nibbles;

typedef union {
    unsigned char byte;
    Nibbles nibbles;
} Byte;

int main() {
    Byte b;
    char hex[3];

    // Test case 1
    printf("Test case 1 :\nEnter the hexa-decimal value : ");
    scanf("%s", hex);
    sscanf(hex, "%hhx", &b.byte);

    // Swap nibbles
    b.byte = (b.nibbles.nibble2 << 4) | b.nibbles.nibble1;

    // Display result
    printf("After swap nibble : %c%c\n", b.nibbles.nibble1 + ((b.nibbles.nibble1 < 10) ? '0' : 'A' - 10), b.nibbles.nibble2 + ((b.nibbles.nibble2 < 10) ? '0' : 'A' - 10));

    // Test case 2
    printf("\nTest case 2 :\nEnter the hexa-decimal value : ");
    scanf("%s", hex);
    sscanf(hex, "%hhx", &b.byte);

    // Swap nibbles
    b.byte = (b.nibbles.nibble2 << 4) | b.nibbles.nibble1;

    // Display result in lowercase
    printf("After swap nibble : %c%c\n", b.nibbles.nibble1 + ((b.nibbles.nibble1 < 10) ? '0' : 'a' - 10), b.nibbles.nibble2 + ((b.nibbles.nibble2 < 10) ? '0' : 'a' - 10));

    return 0;
}


#include <stdio.h>

void printBinary(int num) {
    // Number of bits in an integer
    int bitsInInt = sizeof(int) * 8;

    // Start from the leftmost bit and print each bit
    for (int i = bitsInInt - 1; i >= 0; i--) {
        int mask = 1 << i;
        printf("%d", (num & mask) ? 1 : 0);
    }
    printf("\n");
}

int main() {
    int num;

    // Read the number from the user
    printf("Enter the number: ");
    scanf("%d", &num);

    // Print the binary representation of the number
    printBinary(num);

    return 0;
}


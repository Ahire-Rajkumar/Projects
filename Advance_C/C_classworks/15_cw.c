#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    unsigned int mask = 1; // Start with the rightmost bit
    int bitsInInt = sizeof(int) * 8; // Number of bits in an integer

    for (int i = 0; i < bitsInInt; i++) {
        if (num & mask) {
            count++;
        }
        mask <<= 1; // Shift the mask to the left for the next bit
    }
    return count;
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int setBits = countSetBits(num);

    printf("The count of set bits is %d\n", setBits);

    return 0;
}


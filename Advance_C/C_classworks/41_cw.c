#include <stdio.h>

// Macro to get the value of the Nth bit in a number
#define GET_BIT(num, N) (((num) >> (N)) & 1)

// Macro to set the Nth bit in a number
#define SET_BIT(num, N) ((num) |= (1 << (N)))

// Macro to clear the Nth bit in a number
#define CLEAR_BIT(num, N) ((num) &= ~(1 << (N)))

int main() {
    int num, bit, option;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position (0-31): ");
    scanf("%d", &bit);

    printf("Choose an option:\n");
    printf("1. Get the bit\n");
    printf("2. Set the bit\n");
    printf("3. Clear the bit\n");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Bit at position %d is: %d\n", bit, GET_BIT(num, bit));
            break;
        case 2:
            SET_BIT(num, bit);
            printf("Number after setting bit %d: %d\n", bit, num);
            break;
        case 3:
            CLEAR_BIT(num, bit);
            printf("Number after clearing bit %d: %d\n", bit, num);
            break;
        default:
            printf("Invalid option\n");
    }

    return 0;
}


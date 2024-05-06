#include <stdio.h>

int main() {
    int base, exp, i, power;

    // Read base and exponential value from the user
    printf("Enter the base value: ");
    scanf("%d", &base);
    printf("Enter the exponential value: ");
    scanf("%d", &exp);

    // Calculate and print the power of N series
    for (i = 0; i <= exp; i++) {
        power = 1;
        for (int j = 0; j < i; j++) {
            power *= base;
        }
        printf("%d ", power);
    }
        printf("\n");

    return 0;
}


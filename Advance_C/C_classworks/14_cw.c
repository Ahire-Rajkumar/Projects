#include <stdio.h>

int main() {
    int n, i, j, k;

    // Read the value of n from the user
    printf("Enter n value: ");
    scanf("%d", &n);

    // Print upper part of the rhombus
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    // Print lower part of the rhombus
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}


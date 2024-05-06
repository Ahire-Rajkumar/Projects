#include <stdio.h>

int main() {
    int n, m, i;

    // Read the total number of pattern chars in a line (n) and the number of pattern chars to be printed in the middle (m)
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);

    // Check if n and m are odd numbers
    if (n % 2 == 0 || m % 2 == 0) {
        printf("Both n and m should be odd numbers.\n");
        return 1;
    }

    // Print the line pattern with two different pattern chars
    for (i = 1; i <= n; i++) {
        if (i <= (n - m) / 2 || i > (n + m) / 2) {
            printf("$");
        } else {
            printf("*");
        }
    }
    printf("\n");

    return 0;
}


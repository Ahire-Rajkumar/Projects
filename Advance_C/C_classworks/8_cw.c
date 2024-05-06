#include <stdio.h>

int main() {
    int n, i, power = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Number should be a positive number.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", power);
        power *= 2;
    }

    printf("\n");

    return 0;
}


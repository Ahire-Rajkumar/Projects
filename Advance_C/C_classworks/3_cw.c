#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input from user
    printf("Enter the three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the maximum
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Output
    printf("Max of three numbers is %d\n", max);

    return 0;
}


#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;
    int i;

    // Handle negative numbers
    if (b < 0) {
        a = -a;
        b = -b;
    }

    for (i = 0; i < b; i++) {
        result += a;
    }

    return result;
}

int main() {
    int num1, num2, result;

    // Read two numbers from the user
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Multiply the numbers without using the * operator
    result = multiply(num1, num2);

    // Print the result
    printf("The Result is %d\n", result);

    return 0;
}


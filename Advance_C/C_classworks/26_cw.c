#include <stdio.h>

int main() {
    int num1, num2, sum, product;

    printf("Enter the number1 : ");
    scanf("%d", &num1);

    printf("Enter the number2 : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    product = num1 * num2;

    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);

    return 0;
}


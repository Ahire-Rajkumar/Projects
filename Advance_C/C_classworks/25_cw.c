#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter the number1 : ");
    scanf("%d", &num1);

    printf("Enter the number2 : ");
    scanf("%d", &num2);

    printf("Before swap :\n");
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);

    // Swapping logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap :\n");
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);

    return 0;
}


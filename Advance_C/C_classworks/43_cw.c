#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter the num1 : ");
    scanf("%d", &num1);

    printf("Enter the num2 : ");
    scanf("%d", &num2);

    // Swapping using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping :\n");
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);

    return 0;
}


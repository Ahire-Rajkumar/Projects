#include <stdio.h>

#define SUM(a, b) ((a) + (b))

int main() {
    int num1, num2;

    printf("Enter the num1 : ");
    scanf("%d", &num1);

    printf("Enter the num2 : ");
    scanf("%d", &num2);

    printf("The Sum is %d\n", SUM(num1, num2));

    return 0;
}


#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter the Two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operator : ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            printf("The Result is : %d\n", num1 + num2);
            break;
        case '-':
            printf("The Result is : %d\n", num1 - num2);
            break;
        case 'x':
        case 'X':
            printf("The Result is : %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("The Result is : %d\n", num1 / num2);
            else
                printf("Invalid Operation: Division by zero\n");
            break;
        default:
            printf("Invalid Operator\n");
    }

    return 0;
}


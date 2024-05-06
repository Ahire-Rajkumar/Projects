#include <stdio.h>

int main() {
    int number, square, cube;

    printf("Enter the number : ");
    scanf("%d", &number);

    square = number * number;
    cube = number * number * number;

    printf("Square is %d\n", square);
    printf("Cube is %d\n", cube);

    return 0;
}


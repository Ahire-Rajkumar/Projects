#include <stdio.h>
#include <stdbool.h>

bool isEven(int num) {
    if(num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);

    if(isEven(number)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}


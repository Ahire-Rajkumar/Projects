#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Square is %d\n", square(num));
    return 0;
}


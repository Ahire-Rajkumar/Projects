#include <stdio.h>

// Function to calculate the sum of sequence from 1 to N using recursion
int sumSequence(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumSequence(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the N value: ");
    scanf("%d", &n);

    int sum = sumSequence(n);

    printf("Sum is %d\n", sum);

    return 0;
}


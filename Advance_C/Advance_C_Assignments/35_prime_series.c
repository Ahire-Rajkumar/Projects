/*
Name:Rajkumar Tulshidas Ahire
Date:22/03/2024
Description:WAP to generate the prime series upto the given limit using functions.
Sample i/p and o/p:Test case 1: 
                   user@emertxe]./prime_or_not
                   Enter a number: 2
                   2

                   Test case 2: 
                   user@emertxe]./prime_or_not
                   Enter a number: 4
                   2 3

                   Test case 3: 
                   user@emertxe]./prime_or_not
                   Enter a number: 20
                   2 3 5 7 11 13 17 19

                   Test case 5: 
                   user@emertxe]./prime_or_not
                   Enter a number: -2
                   Invalid input

                   Test case 6: 
                   user@emertxe]./prime_or_not
                   Enter a number: 1
                   Invalid input
*/
#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0; // not a prime number
        }
    }
    return 1; // prime number
}

void generate_prime(int limit) {
    for (int i = 2; i <= limit; ++i) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int limit;

    printf("Enter a number: ");
    scanf("%d", &limit);

    if (limit < 2) {
        printf("Invalid input\n");
        return 1;
    }

    generate_prime(limit);

    return 0;
}

/*
Name:Rajkumar Tulshidas Ahire
Date:21/03/2024
Description:WAP to check whether a given number is prime or not using function.
Sample i/p and o/p:Test case 1: 
                   user@emertxe]./prime_or_not
                   Enter a number: 2
                   2 is a prime number

                   Test case 2: 
                   user@emertxe]./prime_or_not
                   Enter a number: 4
                   4 is not a prime number

                   Test case 3: 
                   user@emertxe]./prime_or_not
                   Enter a number: 101
                   101 is a prime number

                   Test case 4: 
                   user@emertxe]./prime_or_not
                   Enter a number: 47
                   47 is a prime number

                   Test case 5: 
                   user@emertxe]./prime_or_not
                   Enter a number: -2
                   Invalid input

                   Test case 6: 
                   user@emertxe]./prime_or_not
                   Enter a number: 25
                   25 is not a prime number

                   Test case 7: 
                   user@emertxe]./prime_or_not
                   Enter a number: 2089
                   2089 is a prime number
*/
#include <stdio.h>

int isPrime(int num) {
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

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input\n");
    } else if (isPrime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}


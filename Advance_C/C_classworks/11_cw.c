#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        return 1; // It is a palindrome
    } else {
        return 0; // It is not a palindrome
    }
}

int main() {
    int num;

    // Read the number from the user
    printf("Enter the number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        printf("The Entered number is a palindrome.\n");
    } else {
        printf("The Entered number is not a palindrome.\n");
    }

    return 0;
}


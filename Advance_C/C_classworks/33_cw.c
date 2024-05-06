#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);

    if (isPalindrome(str)) {
        printf("Yes, Entered string is palindrome.\n");
    } else {
        printf("No, Entered string is not palindrome.\n");
    }

    return 0;
}


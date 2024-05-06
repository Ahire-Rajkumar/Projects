#include <stdio.h>

int main() {
    char ch;

    // Input from user
    printf("Enter the character : ");
    scanf(" %c", &ch);

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is Upper Case.\n");
    }
    // Check if lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is Lower Case.\n");
    }
    // Check if digit
    else if (ch >= '0' && ch <= '9') {
        printf("The character is Digit.\n");
    }
    // None of the above
    else {
        printf("The character is not an alphabet or digit.\n");
    }

    return 0;
}


/*
Name:Rajkumar Tulshidas Ahire
Date:15/03/2024
Description:WAP to implement your own isxdigit() function
Sample i/p and o/p:Test Case 1:
                   user@emertxe] ./is_xdigit
                   Enter the character: a
                   Entered character is an hexadecimal digit

                   Test Case 2:
                   user@emertxe] ./is_xdigit
                   Enter the character:3
                   Entered character is  an hexadecimal digit

                   Test Case 3:
                   user@emertxe] ./is_xdigit
                   Enter the character:G
                   Entered character is not an hexadecimal digit
*/
#include <stdio.h>

int is_xdigit(char c) {
    return ((c >= '0' && c <= '9') || 
            (c >= 'a' && c <= 'f') || 
            (c >= 'A' && c <= 'F'));
}

int main() {
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if (is_xdigit(ch)) {
        printf("Entered character is an hexadecimal digit\n");
    } else {
        printf("Entered character is not an hexadecimal digit\n");
    }

    return 0;
}


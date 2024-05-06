#include <stdio.h>

// Function to compare two strings
int compareStrings(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0; // Strings are not equal
        }
        str1++;
        str2++;
    }
    // Check if both strings have reached the end ('\0')
    if (*str1 == '\0' && *str2 == '\0') {
        return 1; // Strings are equal
    }
    return 0; // Strings are not equal
}

int main() {
    char str1[100], str2[100];
    printf("Enter the string1: ");
    scanf("%[^\n]s", str1);
    getchar(); // Consume the newline character left in the input buffer

    printf("Enter the string2: ");
    scanf("%[^\n]s", str2);

    if (compareStrings(str1, str2)) {
        printf("Entered Strings are equal\n");
    } else {
        printf("Entered Strings are not equal\n");
    }

    return 0;
}


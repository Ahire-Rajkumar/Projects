#include <stdio.h>

// Function to calculate the length of a string
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);

    int length = stringLength(str);

    printf("String length is %d\n", length);

    return 0;
}


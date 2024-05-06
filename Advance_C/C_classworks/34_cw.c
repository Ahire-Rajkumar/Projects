#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);

    reverseString(str);

    printf("Reversed string is %s\n", str);

    return 0;
}


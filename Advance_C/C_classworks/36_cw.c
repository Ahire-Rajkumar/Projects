#include <stdio.h>

void my_strcat(char *dest, const char *src) {
    // Move the pointer to the end of dest
    while (*dest != '\0') {
        dest++;
    }

    // Copy src to dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add null terminator
    *dest = '\0';
}

int main() {
    char string1[100], string2[100];

    printf("Enter the string1 : ");
    scanf("%s", string1);

    printf("Enter the string2 : ");
    scanf("%s", string2);

    my_strcat(string1, string2);

    printf("concatenate string is %s\n", string1);

    return 0;
}


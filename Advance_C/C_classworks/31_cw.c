#include <stdio.h>

// Function to copy a string
void copyString(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Add null terminator to the end of the copied string
}

int main() {
    char source[100], destination[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", source);

    copyString(source, destination);

    printf("Copied string is %s\n", destination);

    return 0;
}


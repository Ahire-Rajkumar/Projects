#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    int count = 0;

    file = fopen("text.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == 'c') {
            count++;
        }
    }

    printf("Occurrences of 'c' in the file: %d\n", count);

    fclose(file);

    return 0;
}


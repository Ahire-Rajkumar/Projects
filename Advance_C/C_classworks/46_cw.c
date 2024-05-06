#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_in, *file_out;
    char ch;

    file_in = fopen("text.txt", "r");
    if (file_in == NULL) {
        perror("Error opening input file");
        return 1;
    }

    file_out = fopen("text_copy.txt", "w");
    if (file_out == NULL) {
        perror("Error opening output file");
        fclose(file_in);
        return 1;
    }

    while ((ch = fgetc(file_in)) != EOF) {
        fputc(ch, file_out);
    }

    printf("Contents copied to text_copy.txt\n");

    fclose(file_in);
    fclose(file_out);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    // Open the file in read mode
    fp = fopen("text.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    // Read contents from file and print to standard output
    printf("Test case 1 : \n\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    // Open the file in append mode to add additional test case
    fp = fopen("text.txt", "a");

    // Check if file exists
    if (fp == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    // Add some content to the file
    fprintf(fp, "\nAdditional content for test case 2.");

    // Close the file
    fclose(fp);

    // Open the file again in read mode to print the contents
    fp = fopen("text.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    // Read contents from file and print to standard output
    printf("\n\nTest case 2 : \n\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}


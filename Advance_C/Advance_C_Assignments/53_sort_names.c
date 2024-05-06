/*
Name:Rajkumar Tulshidas Ahire
Date:16/04/2024
Description:Read n & n person names of maxlen 20. Sort and print the names
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./sort

                   Enter the size: 5

                   Enter the 5 names of length max 20 characters in each
                   [0] -> Delhi
                   [1] -> Agra
                   [2] -> Kolkata
                   [3] -> Bengaluru
                   [4] -> Chennai

                   The sorted names are:
                   Agra
                   Bengaluru
                   Chennai
                   Delhi
                   Kolkata
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortNames(char (*names)[20], int n) {
    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap names
                char temp[20];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    // Allocate memory dynamically for the array of names
    char (*names)[20] = malloc(n * sizeof(char[20]));

    printf("Enter the %d names of length max 20 characters in each\n", n);
    for (int i = 0; i < n; i++) {
        printf("[%d] -> ", i);
        scanf("%s", names[i]);
    }

    // Sort the names
    sortNames(names, n);

    // Print the sorted names
    printf("\nThe sorted names are:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    // Free the dynamically allocated memory
    free(names);

    return 0;
}


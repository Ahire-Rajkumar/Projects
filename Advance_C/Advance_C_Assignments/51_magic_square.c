/*
Name:Rajkumar Tulshidas Ahire
Date:12/04/2024
Description:WAP to generate a n*n magic square
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./magic_square
                   Enter a number: 3
                   8      1      6
                   3      5      7
                   4      9      2

                   Test Case 2:
                   Enter a number: 6
                   Error : Please enter only positive values
*/
#include <stdio.h>

#define ARR_ROW 50
#define ARR_COL 50

int main() {
    int num, row, column, i, j, dimension;
    char option;
    int magicMatrix[ARR_ROW][ARR_COL] = {0};

    do {
        /* Read a positive number n from user */
        printf("Enter the number: ");
        scanf("%d", &dimension);

        /* Do error checking */
        if ((dimension % 2) == 0 || dimension <= 0) {
            printf("Error : Please enter only positive odd numbers\n");
            break;        
        }

        /* Insert 1 to (n * n) numbers into matrix */
        column = dimension / 2;
        row = 0;
        num = dimension * dimension;

        for (i = 1; i <= num; i++) {
            magicMatrix[row][column] = i;
            if ((i % dimension) == 0) {
                row++;
            } else {
                if (row == 0) {
                    row = dimension - 1;
                } else {
                    row--;
                }

                if (column == (dimension - 1)) {
                    column = 0;
                } else {
                    column++;
                }
            }
        }

        /* Print n X n matrix */
        for (row = 0; row < dimension; row++) {
            for (column = 0; column < dimension; column++) {
                printf("%3d ", magicMatrix[row][column]);
            }
            printf("\n");
        }

        break;

    } while (1);

    return 0;
}


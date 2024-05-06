/*
Name:Rajkumar Tulshidas Ahire
Date:17/04/2024
Description:WAP to find the product of given matrix.
Sample I/P and O/P:Test case1:
                   user@emertxe] ./transpose_product
                   Enter number of rows : 3
                   Enter number of columns : 3
                   Enter values for 3 x 3 matrix :
                   1      2      3
                   1      2      3
                   1      2      3
                   Enter number of rows : 3
                   Enter number of columns : 3
                   Enter values for 3 x 3 matrix :
                   1      1     1
                   2      2     2
                   3      3     3
                   Product of two matrix :
                   14      14      14
                   14      14      14
                   14      14      14

                   Test case 2:
                   user@emertxe] ./transpose_product
                   Enter number of rows : 3
                   Enter number of columns : 3
                   Enter values for 3 x 3 matrix :
                   1      2      3
                   1      2      3
                   1      2      3
                   Enter number of rows : 2
                   Enter number of columns : 3
                   Matrix multiplication is not possible
*/

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], product[10][10];
    int row1, col1, row2, col2;
    int i, j, k;
    int sum;

    // Input for the first matrix
    printf("Enter number of rows: ");
    scanf("%d", &row1);
    printf("Enter number of columns: ");
    scanf("%d", &col1);
    printf("Enter values for %d x %d matrix:\n", row1, col1);
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter number of rows: ");
    scanf("%d", &row2);
    printf("Enter number of columns: ");
    scanf("%d", &col2);
    printf("Enter values for %d x %d matrix:\n", row2, col2);
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if matrix multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication is not possible\n");
    } else {
        // Multiply the two matrices
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                sum = 0;  // Reset sum for each element of the product matrix
                for (k = 0; k < row2; k++) {
                    sum += a[i][k] * b[k][j];
                }
                product[i][j] = sum;
            }
        }

        // Display the product matrix
        printf("Product of the two matrices:\n");
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}


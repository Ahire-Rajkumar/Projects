#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int arr[MAX_SIZE][MAX_SIZE];
    int rows, cols, i, j, min, max;

    // Input the size of the 2D array
    printf("Enter the row size: ");
    scanf("%d", &rows);
    printf("Enter the column size: ");
    scanf("%d", &cols);

    // Input the array elements
    printf("Enter the array elements: ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Initialize min and max with the first element of the array
    min = max = arr[0][0];

    // Find the minimum and maximum values
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // Display the minimum and maximum values
    printf("Min is %d\n", min);
    printf("Max is %d\n", max);

    return 0;
}


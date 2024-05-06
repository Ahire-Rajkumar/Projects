/*
Name:Rajkumar Tulshidas Ahire
Date:08/04/2024
Description:Variance calculation with dynamic arrays
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./variance
                   Enter the no.of elements : 10

                   Enter the 10 elements:
                   [0] -> 9
                   [1] -> 12
                   [2] -> 15
                   [3] -> 18
                   [4] -> 20
                   [5] -> 22
                   [6] -> 23
                   [7] -> 24
                   [8] -> 26
                   [9] -> 31
                   Variance is 40.000000
*/
#include <stdio.h>
#include <stdlib.h>

// Function to calculate the mean of an array
float calculate_mean(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// Function to calculate the variance of an array
float calculate_variance(int *arr, int size) {
    float mean = calculate_mean(arr, size);
    float sum_squared_deviations = 0;
    for (int i = 0; i < size; i++) {
        float deviation = arr[i] - mean;
        sum_squared_deviations += deviation * deviation;
    }
    return sum_squared_deviations / size;
}

int main() {
    int n;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input array elements
    printf("Enter the %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("[%d] -> ", i);
        scanf("%d", &arr[i]);
    }

    // Calculate and output the variance
    float variance = calculate_variance(arr, n);
    printf("Variance is %.6f\n", variance);

    // Free allocated memory
    free(arr);

    return 0;
}


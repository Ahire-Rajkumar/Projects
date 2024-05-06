#include <stdio.h>

int main() {
    int size, sum = 0; // Declare variables for array size and sum of elements
    float average; // Declare variable for average

    // Get the size of the array from the user
    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size]; // Declare an array of the given size

    // Get the array elements from the user
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); // Read each element into the array
        sum += arr[i]; // Add the element to the sum
    }

    average = (float)sum / size; // Calculate the average as sum divided by size

    // Check if the average has a fractional part and print accordingly
    if (average - (int)average != 0) {
        printf("Average is : %.1f\n", average); // Print with one decimal place
    } else {
        printf("Average is : %.0f\n", average); // Print without decimal places
    }

    return 0; // Return 0 to indicate successful completion
}


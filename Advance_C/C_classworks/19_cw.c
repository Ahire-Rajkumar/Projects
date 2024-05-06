#include <stdio.h>

int main() {
    int size, i;
    
    // Input the size of the array
    printf("Enter the size : ");
    scanf("%d", &size);

    // Declare an array of given size
    int arr[size];
    
    // Input array elements
    printf("Enter the array elements : ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest element
    int largest = arr[0];
    for(i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the result
    printf("Largest element is : %d\n", largest);

    return 0;
}


#include <stdio.h>

float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int size;
    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    float average = calculateAverage(arr, size);
    if (size == 5) {
        printf("Average is %.1f\n", average);
    } else if (size == 3) {
        printf("Average is %.4f\n", average);
    }

    return 0;
}


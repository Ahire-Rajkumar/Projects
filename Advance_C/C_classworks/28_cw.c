#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements : ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Square is ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i] * arr[i]);
    }

    return 0;
}


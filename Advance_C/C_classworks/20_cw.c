#include <stdio.h>

int main() {
    int size1, size2;

    printf("Enter the array1 size : ");
    scanf("%d", &size1);

    printf("Enter the array2 size : ");
    scanf("%d", &size2);

    if (size1 != size2) {
        printf("Array elements are not equal.\n");
        return 0;
    }

    int arr1[size1], arr2[size2];

    printf("Enter the array1 elements : ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the array2 elements : ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Assume arrays are equal until proven otherwise
    int isEqual = 1;

    // Compare the elements of the arrays
    for (int i = 0; i < size1; i++) {
        int found = 0;
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            isEqual = 0;
            break;
        }
    }

    if (isEqual) {
        printf("Array elements are equal.\n");
    } else {
        printf("Array elements are not equal.\n");
    }

    return 0;
}


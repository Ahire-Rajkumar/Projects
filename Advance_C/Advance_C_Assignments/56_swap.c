/*
Name:Rajkumar Tulshidas Ahire
Date:18/04/2024
Description:WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./swap
                   1. Int
                   2. char
                   3. short
                   4. float
                   5. double
                   6. string
                   Enter you choice : 1

                   Enter the num1 : 10
                   Enter the num2 : 20
                   After Swapping :
                   num1 : 20
                   num2 : 10
*/
#include <stdio.h>

// Define a macro SWAP to swap two variables of type t
#define SWAP(t, x, y) { t temp = x; x = y; y = temp; }

int main() {
    int choice, num1, num2;
    
    // Display the menu for selecting data type
    printf("1. Int\n");
    printf("2. char\n");
    printf("3. short\n");
    printf("4. float\n");
    printf("5. double\n");
    printf("6. string\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Input two integers
            printf("Enter the num1 : ");
            scanf("%d", &num1);
            printf("Enter the num2 : ");
            scanf("%d", &num2);
            
            // Swap the numbers using the SWAP macro
            SWAP(int, num1, num2);
            
            // Display the numbers after swapping
            printf("After Swapping :\n");
            printf("num1 : %d\n", num1);
            printf("num2 : %d\n", num2);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}


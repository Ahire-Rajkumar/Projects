/*
Name:Rajkumar Tulshidas Ahire
Date:11/04/2024
Description:WAP to convert Little Endian data to Big Endian
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./endianness
                   Enter the size: 2
                   Enter any number in Hexadecimal: ABCD
                   After conversion CDAB
                   Test Case 2:
                   Enter the size: 4
                   Enter any number in Hexadecimal: 12345678
                   After conversion 78563412
*/
#include <stdio.h>
#include <stdint.h>

// Function to swap bytes for 2-byte data
uint16_t swap_bytes_2(uint16_t num) {
    return (num >> 8) | (num << 8);
}

// Function to swap bytes for 4-byte data
uint32_t swap_bytes_4(uint32_t num) {
    return ((num >> 24) & 0xFF) |
           ((num << 8) & 0xFF0000) |
           ((num >> 8) & 0xFF00) |
           ((num << 24) & 0xFF000000);
}

int main() {
    int size;
    // Prompt the user to enter the size of the integer
    printf("Enter the size: ");
    scanf("%d", &size);

    if (size != 2 && size != 4) {
        printf("Invalid size. Please enter 2 or 4.\n");
        return 1;
    }

    if (size == 2) {
        uint16_t num;
        printf("Enter any number in Hexadecimal: ");
        scanf("%hx", &num);

         // Swap the bytes using swap_bytes_2 function and print the result
        uint16_t swapped_num = swap_bytes_2(num);
        printf("After conversion %0X\n", swapped_num);
    } else if (size == 4) {
        uint32_t num;
        printf("Enter any number in Hexadecimal: ");
        scanf("%x", &num);

        // Swap the bytes using swap_bytes_4 function and print the result
        uint32_t swapped_num = swap_bytes_4(num);
        printf("After conversion %8X\n", swapped_num);
    }

    return 0;
}

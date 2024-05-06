/*
Name:Rajkumar Tulshidas Ahire
Date:17/04/2024
Description:WAP to define a macro SIZEOF(x), without using sizeof operator
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./sizeof
                   Size of int : 4 bytes
                   Size of char : 1 byte
                   Size of float : 4 bytes
                   Size of double : 8 bytes
                   Size of unsigned int : 4 bytes
                   Size of long int : 8 bytes
                   ----
                   ----
                   ----
*/

#include <stdio.h>

// Define a macro SIZEOF(x) to calculate the size of x without using sizeof operator
#define SIZEOF(x) ((char*)(&x + 1) - (char*)(&x))

int main() {
    int a;
    char b;
    float c;
    double d;
    unsigned int e;
    long int f;

    // Display the size of each data type
    printf("Size of int : %ld bytes\n", SIZEOF(a));
    printf("Size of char : %ld byte\n", SIZEOF(b));
    printf("Size of float : %ld bytes\n", SIZEOF(c));
    printf("Size of double : %ld bytes\n", SIZEOF(d));
    printf("Size of unsigned int : %ld bytes\n", SIZEOF(e));
    printf("Size of long int : %ld bytes\n", SIZEOF(f));
    printf("---\n");
    printf("---\n");
    printf("---\n");

    return 0;
}


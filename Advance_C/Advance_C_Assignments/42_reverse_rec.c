/*
Name:Rajkumar Tulshidas Ahire
Date:28/03/2024
Description:WAP to reverse the given string using recursive method
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./str_rev
                   Enter a string : Hello World
                   Reverse string is : dlroW olleH

                   Test Case 2:
                   user@emertxe] ./str_rev
                   Enter a string : EMERTXE
                   Reverse string is : EXTREME
*/

#include <stdio.h>

int recursive(char *, int, int); // function declaration

int main()
{
    int i = 0, len = 0, ind = 0; char str[50]; // variable declaration

    //printf("Enter a string : ");
    scanf("%[^\n]", str); // reading the input using selective scanf

    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    str[i] != '\0';

    recursive(str, ind, len - 1); // function call

    printf("Reversed string is %s\n", str); // printing the output string

    return 0;
}

int recursive(char *str, int ind, int len) // function definition
{
    char temp; // swapping elemnets using bubble sort method
    temp = str[ind];
    str[ind] = str[len - ind];
    str[len - ind] = temp;

    if (ind == len / 2)
    {
        return 0;
    }
    recursive(str, ind + 1, len); // function call
}

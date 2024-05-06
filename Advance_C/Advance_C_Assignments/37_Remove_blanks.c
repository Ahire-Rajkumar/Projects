/*
Name:Rajkumar Tulshidas Ahire
Date:26/03/2024
Description:WAP to replace each string of one or more blanks by a single blank
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./remove_multi_space
                   Enter the string with more spaces in between two words
                   Pointers     are               sharp     knives.
                   Pointers are sharp knives.

                   Test Case 2:
                   user@emertxe] ./remove_multi_space
                   Enter the string with more spaces in between two words
                   Welcome                to Emertxe
                   Welcome to Emertxe

                   Test Case 1:
                   user@emertxe] ./remove_multi_space
                   Enter the string with more spaces in between two words
                   Welcome to Emertxe
                   Welcome to Emertxe
 */

#include <stdio.h>

void replace_blank(char *); // function declaration

int main()
{
    char str[100]; // declare the string

    //printf("Enter the string with more spaces in between two words\n");   
    scanf("%[^\n]", str);  //reading the input using selective scanf

    replace_blank(str); // call the function

    printf("%s\n", str); // printing the modified output string

    return 0;
}

void replace_blank(char *str) // function definition
{
    int i = 0;               // initilize variable
    while(str[i++] != '\0')
    {
        if(str[i] == ' ' && str[i + 1] == ' ' || str[i] == '\t' && str[i + 1] == '\t') // checking the condition
        {
            int j = i;
            while(str[j++] != '\0')
            {
                str[j] = str[j + 1]; // replacing the blanks in a string
            }
            i--;
        }
    }
}

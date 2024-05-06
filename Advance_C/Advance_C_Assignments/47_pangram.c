/*
Name:Rajkumar Tulshidas Ahire
Date:04/04/2024
Description:WAP to check given string is Pangram or not
Sample I/P and O/P:Test Case 1:
                   Enter the string: The quick brown fox jumps over the lazy dog
                   The Entered String is a Pangram String

                   Test Case 2:
                   Enter the string: The quick brown fox jumps over the dog
                   The Entered String is not a Pangram String
*/

#include <stdio.h>

int pangram(char *str, int *x) // function definition
{
    int count = 0, i = 0, index; // variable declaration

    while (str[i] != '\0')
    {

        if(str[i] >= 65 && str[i] <= 90) // checking the condition 
        {
            index = str[i] - 65;
        }
        else
        {
            index = str[i] - 97;
        }
        x[index] = 1;

        i++;
    }

    for (i = 0; i < 26; i++)
    {
        if (x[i] == 1)

            count++;
    }

    if (count == 26)
        printf("The Entered String is a Pangram String\n"); //printing the output
    else
        printf("The Entered String is not a Pangram String\n"); //printing the output
}

int main()
{
    int x[26] = {}; // array declaration
    char str[100]; // string declaration

    printf("Enter the string: ");
    scanf("%[^\n]", str); // //reading the input using selective scanf

    pangram(str, x); // function call to pass input to funtion

    return 0;
}
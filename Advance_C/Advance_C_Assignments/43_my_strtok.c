/*
Name:Rajkumar Tulshidas Ahire
Date:29/03/2024
Description:WAP to implement strtok function
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./my_strtok
                   Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
                   Enter string2 : ;./-:
                   Tokens :
                   Bangalore
                   Chennai
                   Kolkata
                   Delhi
                   Mumbai

                   Test Case 2:
                   user@emertxe] ./my_strtok
                   Enter string1 : -;Bangalore;;::---Chennai:;Kolkata:;Delhi:-
                   Enter string2 : ;./-:
                   Tokens :
                   Bangalore
                   Chennai
                   Kolkata
                   Delhi
*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]); // function declaration

int main()
{
    char str[50], delim[50]; // variable declaration

    printf("Enter the string1  : ");
    scanf("%s", str); // reading the input string

    __fpurge(stdout);

    printf("Enter the string2 : ");
    scanf("%s", delim); // reading the input delimeter

    __fpurge(stdout);

    char *token = my_strtok(str, delim); // function call

    printf("Tokens :\n");

    while (token)
    {
        if (*token != '\0')
        {
            printf("%s\n", token);
        }
        token = my_strtok(NULL, delim); // function call
    }
    return 0;
}

char *my_strtok(char str[], const char delim[]) // function definition
{
    int i = 0, j = 0, k = 0; // variable declaration
    static int index = 0;    // static variable declaration
    static char *temp;       // static pointer variable declaration
    k = index;
    if (str != NULL)
        temp = str;

    for (index; temp[index] != '\0'; index++)
    {
        for (j = 0; delim[j] != '\0'; j++)
        {
            if (temp[index] == delim[j]) // comparing each element with delimeter
            {
                temp[index] = '\0';
                index++;
                return (temp + k);
            }
        }
    }

    if (temp[k] == '\0') // comparing each element with '\0'
    {
        return NULL;
    }

    return (temp + k);
}

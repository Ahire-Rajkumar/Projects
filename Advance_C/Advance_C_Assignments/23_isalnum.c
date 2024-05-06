/*
Name:Rajkumar Tulshidas Ahire
Date:15/03/2024
Description:WAP to implement your own isalnum() function
Sample i/p and o/p:Test Case 1:
                   user@emertxe] ./c_type_lib
                   Enter the character: a
                   The character 'a' is an alnum character.

                   Test Case 2:
                   Enter the character: ?
                   The character '?' is not an alnum character.
*/
#include <stdio.h>

int my_isalnum(char ch);  // Function prototype

int main()
{
    char ch;  // Variable declaration
    int ret;

    printf(" ");
    scanf("%c", &ch);   
 
    ret = my_isalnum(ch);  // Function call
    
    if (ret)
        printf("Entered character is alphanumeric character\n");
    else
        printf("Entered character is not alphanumeric character\n");
        
    return 0;
}

int my_isalnum(char ch)
{
    if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        return 1;
    else
        return 0;
}


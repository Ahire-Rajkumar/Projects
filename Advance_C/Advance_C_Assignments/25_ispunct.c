/*
Name:Rajkumar Tulshidas Ahire
Date:15/03/2024
Description:WAP to implement your own ispunct() function
Sample i/p and o/p:Test Case 1:
                   user@emertxe] ./c_type_lib
                   Enter the character: a
                   Entered character is not punctuation character

                   Test Case 2:
                   Enter the character:$
                   Entered character is punctuation character
*/
#include <stdio.h>

int my_ispunct(char ch); // function and parameters

int main()
{
    char ch;
    int ret;

    printf(" ");
    scanf(" %c", &ch);   
 
    ret = my_ispunct(ch);  // return character value stored in ret
    
    if (ret)
        printf("Entered character is punctuation character\n");
    else
        printf("Entered character is not punctuation character\n");

    return 0;
}

int my_ispunct(char ch)
{
    if ((ch >= '!' && ch <= '/') || (ch >= ':' && ch <= '@') || // ascii value of  punctuation character range within the range return the value to ret                                      
    
        (ch >= '[' && ch <= '`') || (ch >= '{' && ch <= '~'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



/*
Name:Rajkumar Tulshidas Ahire
Date:27/03/2024
Description:WAP to implement itoa function
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./itoa
                   Enter the number : 1234
                   Integer to string is 1234

                   Test Case 2:
                   user@emertxe] ./itoa
                   Enter the number : -1234
                   Integer to string is -1234

                   Test Case 3:
                   user@emertxe] ./itoa
                   Enter the number : +1234
                   Integer to string is 1234

                   Test Case 4:
                   user@emertxe] ./itoa
                   Enter the number : a1234
                   Integer to string is 0
*/

#include <stdio.h>

int my_itoa(int num, char *); // function declaration

int main()
{
    int num, ret; char str[10]; // variable declaration

    printf("Enter the number : ");
    ret = scanf("%d", &num); //reading the input number

    if (ret)
    {
        my_itoa(num, str); // function call

        printf("Integer to string is %s\n", str); // printing the output
    }
    else
    {
        printf("Integer to string is %d\n", ret); // printing the output
    }
    return 0;
}
int my_itoa(int num, char *str)
{
    int flag = 0, i = 0, mod = 0, div = 0, count = 0, j = 0, k = 0; // variable declaration

    if (num < 0) 
    {
        flag = 1; 
        num = -num;
    }

    while (num != 0)
    {
        mod = num % 10;
        num = num / 10;
        str[i] = mod + 48; // adding 48 ascii value
        i++;
    }

    if (flag == 1) // if checking for flag is equal one
    {
        str[i] = '-';
        str[i + 1] = '\0';
    }
    else
    {
        str[i] = '\0';
    }

    while (str[k] != '\0') // while loop finding count
    {
        count++;
        k++;
    }

    for (int i = 0; i < count / 2; i++) // swaping elements
    {
        char temp;
        temp = str[count - i - 1];
        str[count - i - 1] = str[i];
        str[i] = temp;
    }
}
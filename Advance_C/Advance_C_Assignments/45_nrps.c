/*
Name:Rajkumar Tulshidas Ahire
Date:01/04/2024
Description:Generate consecutive NRPS of length n using k distinct character
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./nrps
                   Enter the number characters C : 3
                   Enter the Length of the string N : 6
                   Enter 3 distinct characters : a b c
                   Possible NRPS is abcbca

                   Test Case 2:
                   Enter the number characters C : 3
                   Enter the Length of the string N : 7
                   Enter 3 distinct characters : a b a
                   Error : Enter distinct characters
*/

#include <stdio.h>

void nrps(char *, int, int);

int main()
{
    int c, n;
    printf("Enter the number characters C : ");
    scanf("%d", &c);
    printf("Enter the Length of the string N : ");
    scanf("%d", &n);
    char arr[c + 1]; // Use 'c + 1' to account for the null terminator
    printf("Enter %d distinct characters : ", c);
    for (int i = 0; i < c; i++)
    {
        scanf(" %c", &arr[i]); // Use a space before %c to consume any leading whitespace
    }
    arr[c] = '\0'; // Null terminate the string
    nrps(arr, c, n);
    return 0;
}

void nrps(char *arr, int c, int n)
{
    int i, j;
    char temp;
    for (i = 0; i < c; i++)
    { //loop through the string and match every character to others to check for duplicates
        for (j = 0; j < c; j++)
        {
            if (arr[i] == arr[j] && j != i)
            {
                printf("Error : Enter distinct characters\n");
                return;
            }
        }
    }
    i = 0;
    printf("Possible NRPS is ");
    while (i < n)
    {
        for (j = 0; j < c && i < n; j++)
        {
            printf("%c", arr[j]);
            i++;
        }
        temp = arr[0];
        for (j = 0; j < c - 1; j++)
        { // Rotate the characters in the array
            arr[j] = arr[j + 1];
        }
        arr[c - 1] = temp;
    }
    printf("\n");
}


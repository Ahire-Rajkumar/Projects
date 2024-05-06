/*
Name:Rajkumar Tulshidas Ahire
Date:25/03/2024
Description:WAP to count no of characters,words and lines, entered through stdin.
Sample i/o and o/p:Test case 1:
                   hello world
                   dennis ritchie
                   linux
                   character count: 33
                   word count: 5
                   line count: 3

                   Test case 2:
                   Hello    world
                   dennis  ritcchie
                   linux
                   characte count: 39
                   line count: 3
                   word count: 5
*/
#include<stdio.h>

int main()
{
    char ch, p_char = ' '; //initialization and declaration of variables

    int my_char = 0, line = 0, word = 0;

    while((ch = getchar()) != EOF) //reading input from std input
    {
        my_char++; // character count

        if(ch == '\n')
        {
            line++; // line count
        }

        if ((p_char != ' ' &&  p_char != '\n' && p_char != '\t') && (ch == ' ' || ch == '\n' || ch == '\t')) // checking the condition
        {
            word++; // word count
        }

        p_char = ch;
    }

    printf("Character count : %d\n", my_char); // printing the character count output

    printf("Line count : %d\n", line);  // printing the line count output

    printf("Word count : %d\n", word);  // printing the word count output

    return 0;
}

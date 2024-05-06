/*
Name:Rajkumar Tulshidas Ahire
Date:06/03/2024
Description:WAP to check whether a given number is prime or not.
Sample i/p and o/p:Test case 1: 
                   user@emertxe]./prime_or_not
                   Enter a number: 2
                   2 is a prime number

                   Test case 2: 
                   user@emertxe]./prime_or_not
                   Enter a number: 4
                   4 is not a prime number

                   Test case 3: 
                   user@emertxe]./prime_or_not
                   Enter a number: 101
                   101 is a prime number

                   Test case 4: 
                   user@emertxe]./prime_or_not
                   Enter a number: 47
                   47 is a prime number

                   Test case 5: 
                   user@emertxe]./prime_or_not
                   Enter a number: -2
                   Invalid input

                   Test case 6: 
                   user@emertxe]./prime_or_not
                   Enter a number: 25
                   25 is not a prime number

                   Test case 7: 
                   user@emertxe]./prime_or_not
                   Enter a number: 2089
                   2089 is a prime number    
 */
#include<stdio.h>

int main()
{
    int n, count=0, i;
    scanf("%d",&n);
    if (n < 2) 
    {
        printf("Invalid input\n");
        return 0;
    }
   
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}

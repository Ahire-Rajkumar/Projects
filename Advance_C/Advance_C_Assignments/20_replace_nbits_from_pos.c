/*
Name:Rajkumar Tulshidas Ahire
Date:13/03/2024
Description:WAP to put the (b-a+1) lsb’s of num into val[b:a]
Sample i/p and o/p:Test Case 1:
                   user@emertxe] ./bit_ops
                   Enter the value of 'num' : 11
                   Enter the value of 'a' : 3
                   Enter the value of 'b' : 5
                   Enter the value of 'val': 174
                   Result : 158
*/
#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);                                               // function and parameters

int main()
{   
    int num, a, b, val, res = 0;                                                              // variable declaration 
      
    printf("Enter the value of 'num' : ");
    scanf("%d",&num);                                                                         // read num a,b, and val from user
   
    printf("Enter the value of 'a' : ");
    scanf("%d",&a);

    printf("Enter the value of 'b' : ");
    scanf("%d",&b);

    printf("Enter the value of 'val' : ");
    scanf("%d",&val);
 
    if (a <= b && b <= 31)                                                                    // whether to check a and b entered value within 31
    {   
        
        res = replace_nbits_from_pos(num, a, b-a+1, val);                                     // function call to replace num bits from the position         
        
        printf("Result : %d\n", res);                                                         // display the result
    }
    
    else
    
        printf("invalid output : please pass the value a and b  less than or equal to 31\n"); // a and b value above 31 to print the error message

    return 0;
}    

int replace_nbits_from_pos(int num, int a, int b, int val)                                    // function prototype to replace the n bits from the value

{

    int res = ((num & ((1 << b)-1)) << a) | (val & (~(((1 << b)-1) << a)));                   // to replace num bits from the postion

    return res;
}


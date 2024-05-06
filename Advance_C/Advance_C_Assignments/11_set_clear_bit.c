/*
Name:Rajkumar Tulshidas Ahire
Date:02/03/2024
Description:WAP to check N th bit is set or not, If yes, clear the M th bit
Sample i/p and o/p:Test Case 1:
                   Enter the number: 19
                   Enter 'N': 1
                   Enter 'M': 4
                   Updated value of num is 3 

                   Test Case 2:
                   Enter the number: 19
                   Enter 'N': 2
                   Enter 'M': 4
                   Updated value of num is 19 
*/

#include<stdio.h>

int main()

{
  //varaiable declaration
  int num,N,M,mask=1;

  // read from the user
  printf("Enter the number: ");
  scanf("%d",&num);

  printf("Enter 'N': ");
  scanf("%d",&N);

  printf("Enter 'M': ");
  scanf("%d",&M);
  // to get bit opration with mask value,mask number genarate nth value
  if(num & mask << N) 
  {
  // condition is true then clear mth postion bit
    num=num & ~(1 << M);
  // to print the updated number
    { 
      printf("Updated value of num is %d\n",num);
    } 
  }        
    else
    {
       printf("Updated value of num is %d\n",num);
    }
  
  return 0;


}

/*
Name:Rajkumar Tulshidas Ahire
Date:26-02-2024
Description:WAP to find the max of two numbers
Sample I/P and O/P:
Test case 1 : 
Enter the num1 : 10
Enter the num2 : 20 
Max of two numbers is 20

Test case 2 :
Enter the num1 : 95
Enter the num2 : 25 
Max of two numbers is 95
*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Output
    printf("Enter the num1 : ");
    scanf("%d", &num1);

    // Output
    printf("Enter the num2 : ");
    scanf("%d", &num2);

    // Finding the maximum
    int max = (num1 > num2) ? num1 : num2;

    // Output
    printf("Max of two numbers is %d\n", max);

    return 0;
}

#include <stdio.h>

int main() {
    int percentage;

    // Input from user
    printf("Enter the percentage : ");
    scanf("%d", &percentage);

    // Check if percentage is valid
    if (percentage > 100) {
        printf("Error: Please enter the percentage less than or equal to 100.\n");
        return 0;
    }

    // Determine the grade
    char grade;
    if (percentage > 90) {
        grade = 'A';
    } else if (percentage > 70) {
        grade = 'B';
    } else if (percentage > 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    // Output
    printf("The Grade is %c\n", grade);

    return 0;
}


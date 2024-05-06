#include <stdio.h>

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit, celsius;
    printf("Enter the Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheit_to_celsius(fahrenheit);
    printf("Degree Celsius %.6f\n", celsius);
    return 0;
}

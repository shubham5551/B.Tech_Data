// WAP in C program to convert temperature from Celsius to Fahrenheit.
// Formula: F=(Cx9/5)+32
// Where: F = Temperature in Fahrenheit , C = Temperature in Celsius

#include <stdio.h>

int main() {
    float celsius, fahrenheit;  // variable declaration

    // input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // display result
    printf("Temperature in Fahrenheit: %.2f", fahrenheit);

    return 0;
}


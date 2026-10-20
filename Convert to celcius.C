//Program to convert temperature from fahrenheit to celcius
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: Convert to celcius
Date: 16/10/2026
*/
#include <stdio.h>

double convertToCelsius(double fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(void)
{
    double f;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &f) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("%.2f F = %.2f C\n", f, convertToCelsius(f));
    return 0;
}

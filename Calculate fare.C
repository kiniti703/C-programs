//Program to calculate fare
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: Fare calculator
Date: 16/10/2026
*/
#include <stdio.h>

#define RATE_PER_KM 50

double calculateFare(double distance)
{
    if (distance <= 0) {
        return 0.0;
    }
    return distance * RATE_PER_KM;
}

int main(void)
{
    double distance;

    printf("Enter distance traveled (km): ");
    if (scanf("%lf", &distance) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Total fare: KSh. %.2f\n", calculateFare(distance));
    return 0;
}

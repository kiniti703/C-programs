//program to display water bill
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: Water bill calculator.
Date: 23/09/2026
*/
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = units * 25;
    } else {
        bill = units * 30;
    }

    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}
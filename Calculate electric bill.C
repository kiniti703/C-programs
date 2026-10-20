//program to calculate electric bill
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: Electric bill calculator
Date: 16/10/2026
*/
#include <stdio.h>

double calculateElectricBill(int units)
{
    double bill = 0.0;

    if (units <= 0) {
        return 0.0;
    }

    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = 100 * 10.0 + (units - 100) * 15.0;
    } else {
        bill = 100 * 10.0 + 100 * 15.0 + (units - 200) * 20.0;
    }

    return bill;
}

int main(void)
{
    int units;

    printf("Enter number of units consumed: ");
    if (scanf("%d", &units) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Total bill: KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}

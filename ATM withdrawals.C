//program to withdraw from an ATM
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: money witdrawal program
Date: 05/10/2026
*/
#include <stdio.h>

int main() {
    float balance;
	float withdrawal;

    printf("Enter the initial balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance = balance - withdrawal;

        printf("Balance after withdrawal: %f\n", balance);
    }

   
    return 0;
}



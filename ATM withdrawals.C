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



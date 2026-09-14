//Single line comment
//Program to display user details
/*
Author: Bildad Kiniti
Registration number: BCS-03-0135/2026
Description: User details program
Date: 10/09/2026
Version 1
*/
#include <stdio.h>// scanf(), printf()
int main() {
   float height;
    double bankBalance;
    char phoneNumber[20];

    // Prompt the user for input
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your bank balance in Kenya Shillings: ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number: ");
    scanf("%19s", phoneNumber);

    // Display the entered information
    printf(".......DETAILS.............\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: KSh %.2f\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
    

    
}
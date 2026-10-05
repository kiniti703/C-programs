//program to display password
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: password authenticator
Date: 05/010/2026
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(password, "1234") != 0);

    printf("Login successful!\n");

    return 0;
}
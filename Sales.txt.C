//program to display daily sales transactions  
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: Daily sales 
Date: 01/11/2026
*/
#include <stdio.h>

int main(void) {
    FILE *fp;
    double amount, total = 0.0;
    int count = 0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open sales.txt\n");
        return 1;
    }

    while (fscanf(fp, "%lf", &amount) == 1) {
        total += amount;
        count++;
    }

    fclose(fp);   

    printf("Transactions read: %d\n", count);
    printf("Total sales for the day: KSh. %.2f\n", total);
    return 0;
}
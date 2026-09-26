//program to display exam eligibility
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: eligibility for the final exam
Date: 24/09/2026
*/
#include <stdio.h>

int main() {
    float attendance, marks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &marks);

    if (attendance >= 75 && marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
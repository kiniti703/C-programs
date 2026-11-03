//program to display students details 
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: student details
Date: 29/10/2026
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    
    FILE *fp;
    char name[100];
    char regNo[30];

   
    fp = fopen("student_details.txt", "w");
    if (fp == NULL) {
        printf("Error: could not open student_details.txt\n");
        return 1;
    }

   
    printf("Enter student's full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';        
    printf("Enter registration number: ");
    fgets(regNo, sizeof(regNo), stdin);
    regNo[strcspn(regNo, "\n")] = '\0';

   
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Registration Number: %s\n", regNo);

    
    fclose(fp);
    printf("Student details saved successfully in student_details.txt\n");

    return 0;
}
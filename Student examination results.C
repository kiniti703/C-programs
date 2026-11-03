//program to display  and store University examiation results
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: Examination results
Date: 02/11/2026
*/
#include <stdio.h>

struct Student {
    char  name[50];
    char  regNo[20];
    float totalMarks;
};

int main(void) {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error: could not open results.dat\n");
        return 1;
    }

    printf("%-30s %s\n", "NAME", "MARKS");
    printf("-------------------------------------------\n");
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("%-30s %.2f\n", s.name, s.totalMarks);
    }

    fclose(fp);
    return 0;
}
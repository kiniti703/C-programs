//program to display books borrowed   
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: books borrowed
Date: 31/10/2026
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char title[200];

    
    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error: could not open borrowed_books.txt\n");
        return 1;
    }

    printf("Enter book titles borrowed today (press Enter on an empty line to finish):\n");
    while (1) {
        printf("Title: ");
        if (fgets(title, sizeof(title), stdin) == NULL) break;
        title[strcspn(title, "\n")] = '\0';      
        if (title[0] == '\0') break;             

        fprintf(fp, "%s\n", title);
        printf("\"%s\" was stored successfully.\n", title);
    }

    fclose(fp);
    return 0;
}
//program to display Employeees records 
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: Employees record management system
Date: 06/11/2026
*/
#include <stdio.h>


void writeEmployee();
void readEmployee();
void appendEmployee();

void writeEmployee(){
	
	FILE *fp;
	int id;
	char name[50],dept[50];
	
	fp= fopen("Employees.txt", "w");
	
    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter full name: ");
    scanf(" %[^\n]", name);
    printf("Enter department: ");
    scanf(" %[^\n]", dept);
	
	fprintf(fp, "%d %s %s\n", id, name, dept);
	fclose(fp);
	
}
void readEmployee(){
	
	FILE *fp;
	int ch;
	
	fp= fopen("Employee.txt", "r");
	while((ch = fgetc(fp)) !=EOF)
		putchar(ch);
	fclose(fp);
	
}
void appendEmployee(){
		FILE *fp;
	int id;
	char name[50], dept[50];
	
	fp= fopen("Employee.txt", "a");
    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter full name: ");
    scanf(" %[^\n]", name);
    printf("Enter department: ");
    scanf(" %[^\n]", dept);
    
    fprintf(fp, "%d %s %s\n", id, name, dept);
    fclose(fp);
    
	
}
int main(int argc, char** argv)
{
	writeEmployee();
	readEmployee();
	appendEmployee();
	readEmployee();
	return 0;
}
	
    
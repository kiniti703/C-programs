//program to display library fine amount
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: library fine amount
Date: 23/09/2026
*/
#include <stdio.h>
int main(){
	int book_id;
	int due_date;
	int return_date;
	int days_overdue;
	int fine_rate;
	int fine_amount;
	
	//prompt the user
	printf("Enter the book id:  ");
	scanf("%d", &book_id);
	
    printf("Enter due date:  ");
	scanf("%d", &due_date);
	
    printf("Enter return date:  ");
	scanf("%d", &return_date);
	
	//Calculate days overdue
	days_overdue = return_date-due_date;
	
	if(days_overdue<=0){
		fine_rate = 0;
		fine_amount = 0;
	}
	else if(days_overdue<=7){
		fine_rate = 20;
		fine_amount =days_overdue*fine_rate;
		
	}
	else if(days_overdue<=14){
		fine_rate = 50;
		fine_amount =days_overdue*fine_rate;
	}
	else{
		fine_rate = 100;
		fine_amount =days_overdue*fine_rate;
		
	}
	printf("\n======Fine Details=====\n");
	printf("Book ID     : %d\n", book_id);
	printf("Due Date    : %d\n", due_date);
	printf("Return Date    : %d\n", return_date);
	printf("Days Overdue   : %d\n", days_overdue);
	printf("Fine Rate     : %d\n", fine_rate);
	printf("Fine Amount    : %d\n", fine_amount);
	
	return 0;
	
}
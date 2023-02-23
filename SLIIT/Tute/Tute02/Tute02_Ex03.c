#include <stdio.h>
int main(){
	
	int marks1;
	int marks2;
	int total;
	int avg;
	
	printf("Enter marks 1: ");
	scanf("%d",&marks1);
	printf("Enter marks 2: ");
	scanf("%d",&marks2);

	total = marks1 + marks2;
	avg = total/2;
	printf("\n");
	printf("Marks 1 is %d \nMarks 2 is %d\n\n", marks1,marks2);	
	printf("Total is %d\n",total);
	printf("Average is %d",avg);
	
	return 0;
}

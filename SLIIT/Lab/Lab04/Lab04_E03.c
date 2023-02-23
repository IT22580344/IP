#include <stdio.h>
int main(void){
	int pkgType,numOfPerson;
	float totalCost;
	printf("pkgType\t\tTitle\n1\t\tHorse ride\n2\t\tScuba Diving\n3\t\tWater Rafting\n\n");
	
	printf("Enter Package Type(1,2,3): ");
	scanf("%d",&pkgType);
	
	printf("Enter Number of person: ");
	scanf("%d",&numOfPerson);
	 	
	switch(pkgType){
		case 1: 
			totalCost = numOfPerson*2000;
			printf("Total cost is: %.2f",totalCost);
			break;
		case 2: 
			totalCost = numOfPerson*5000;
			printf("Total cost is: %.2f",totalCost);
			break;
		case 3: 
			totalCost = numOfPerson*7000;
			printf("Total cost is: %.2f",totalCost);
			break;
		default:
			printf("Incorrect Package Type");
	}
	
	
	return 0;
}

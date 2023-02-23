#include <stdio.h>
int main(void){
	char type;
	double amount,balance = 10000;
	printf("Your balance is %.2lf\n",balance);
	printf("input transaction type(W,D): ");
	type = getchar();
	
	if(type=='W'||type=='w'){
		printf("You have selected to withdraw money\n");
		printf("Enter amount: ");
		scanf("%lf",&amount);
		balance = balance-amount;
		printf("Your new balance is : %.2lf",balance);
	}
	else if(type=='D'||type=='d'){
		printf("You have selected to deposit money\n");
		printf("Enter amount: ");
		scanf("%lf",&amount);
		balance = balance+amount;
		printf("Your new balance is : %.2lf",balance);
	}
	else{
		printf("Invalid Input");
	}
	return 0;
}

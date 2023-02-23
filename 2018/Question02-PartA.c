//Question02 - Part A
#include <stdio.h>
#include <string.h>
struct customerTransactions{
	int accountNumber;
	char name[10];
	char transactionType;
	float amount;
}person[5];

int main(void)
{
	int i,flag=1;
	float totalDeposit = 0, totalWithdrawal = 0, maximumDiposit = 0, minimumWithdrawal = 0;
	char maximumDipositPerson[10],minimumWithdrawalPerson[10];
	for(i=0;i<5;i++)
	{
		printf("Enter Person %d details\n",i+1);
		printf("\tAccount Number: ");
		scanf("%d",&person[i].accountNumber);
		
		printf("\tName: ");
		scanf("%s",person[i].name);
		
		printf("\tTransaction Type(w/d): ");
		scanf(" %c",&person[i].transactionType);
		
		printf("\tAmount: ");
		scanf("%f",&person[i].amount);
	}
	
	for(i=0;i<5;i++)
	{
		if(flag==1)
		{
			maximumDiposit = person[i].amount;
			minimumWithdrawal = person[i].amount;
			flag = 0;
		}
		
		if(person[i].transactionType == 'w' ||person[i].transactionType == 'W'){
			totalWithdrawal += person[i].amount;
			if(person[i].amount<minimumWithdrawal){
				minimumWithdrawal = person[i].amount;
				strcpy(minimumWithdrawalPerson,person[i].name);
			}
		}
		else if(person[i].transactionType == 'd' ||person[i].transactionType == 'D'){
			totalDeposit += person[i].amount;
			if(person[i].amount>maximumDiposit){
				maximumDiposit = person[i].amount;
				strcpy(maximumDipositPerson,person[i].name);
			}
		}
	}
	
	printf("\nTotal deposit amount: %f\n",totalDeposit);
	printf("Total Withdrawal amount: %f\n",totalWithdrawal);
	printf("Name of the customer with maximum diposit amount: %s\n",maximumDipositPerson);
	printf("Name of the customer with minimum withdrawal amount: %s\n",minimumWithdrawalPerson);

	return 0;
}

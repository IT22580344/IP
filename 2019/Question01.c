#include <stdio.h>
int main(void)
{
	int type,amount;
	char size,credit,loyalty,online;
	float cost,discount,net;
	
	while(1)
	{
		printf("Input pizza type: ");
		scanf("%d",&type);
		if(type == -1)
		{
			break;
		}
		while(type!=1&&type!=2)
		{
			printf("Invalid type\n");
			printf("Input pizza type: ");
			scanf("%d",&type);
		}
		printf("Input the pizza size(L/M): ");
		scanf(" %c",&size);
		while(size!='L'&&size!='M')
		{
			printf("Invalid size\n");
    		printf("Input the pizza size(L/M): ");
    		scanf(" %c",&size);
		}
		printf("Input the numbers of pizzas: ");
		scanf("%d",&amount);
		
		if(type == 1)
		{
			if(size == 'L')
			{
				cost += 1720.00*amount;
			}
			else if(size == 'M')
			{
				cost += 975.00*amount;
			}
		}
		else if(type == 2)
		{
			if(size == 'L')
			{
				cost += 1820.00*amount;
			}
			else if(size == 'M')
			{
				cost += 1000.00*amount;
			}
		}
		
	}
	
	printf("\nAre you paying by credit card (Y/N) ? ");
	scanf(" %c",&credit);
	printf("Are you a loyalty customer (Y/N) ? ");
	scanf(" %c",&loyalty);
	printf("Is this an online order (Y/N) ? ");
	scanf(" %c",&online);
	
	if(credit == 'Y')
	{
		discount = cost*0.2;
	}
	else if(loyalty == 'Y')
	{
		discount = cost*0.15;
	}
	else if(online == 'Y')
	{
		discount = cost*0.05;
	}
	else
		discount = 0;
	
	net = cost - discount;
	printf("\nTotal bill amount: %.2f \n",cost);
	printf("Discount: %.2f\n",discount);
	printf("Net amount: %.2f\n",net);
	return 0;
}

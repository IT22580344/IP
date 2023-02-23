#include <stdio.h>
float calBonus(float salary); //declare calBonus function
int main(void)
{
	float salary,bonusAmount,netSalary,bonus;
	
	printf("Enter Basic Salary: ");
	scanf("%f",&salary);
	
	bonusAmount = calBonus(salary);
	netSalary = salary + bonusAmount;
	
	printf("Your Salary is %.2f\n",salary);
	printf("Your Bonus Amount %.2f\n",bonusAmount);
	printf("Your Net Salary %.2f\n",netSalary);
}

float calBonus(float salary) //define calBonus function
{	
	float bonus;
	if(salary>20000)
	 bonus = salary*2.0;
	else
	 bonus = salary/2.0;
	return bonus;
} 



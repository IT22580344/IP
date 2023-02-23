#include <stdio.h> //import header files
float calcIncrement(float salary, int noofYearsWorked); //function declaration
float calcTotSalary(float salary, float increment);//function declaration

int main(void)
{
	float salary,increment,total_Salary;
	int years;

	printf("Enter salary: ");
	scanf("%f",&salary);
	printf("Enter numof years worked: ");
	scanf("%d",&years);

	increment = calcIncrement(salary,years);
	total_Salary = calcTotSalary(salary,increment);
	printf("Increment is:%.2f\n",increment);
	printf("Total Salary is:%.2f\n",total_Salary);
	return 0;
}

float calcIncrement(float salary, int noofYearsWorked)
{
	float increment;
	if(noofYearsWorked>2)
	{
		increment = salary*0.1;
	}
	return increment;
}
float calcTotSalary(float salary, float increment)
{
	return salary+increment;
}

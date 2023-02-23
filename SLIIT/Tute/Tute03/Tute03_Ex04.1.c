#include <stdio.h>
int main(void)
{	
	int age;
	char gender[10];
	printf("Enter gender male or female: ");
	scanf("%s",gender);
	printf("Enter age: ");
	scanf("%d",&age);
	
	if(age>65)
	{
		
		if(strcmp(gender, "female") == 0)
		{
			printf("SeniorFemale");
		}	
		
			if(strcmp(gender, "male") == 0)
		{
			printf("SeniorMale");
		}	
		
	}
	else{
		printf("Not a senior");
	}
	
	
	return 0;
}

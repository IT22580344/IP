#include <stdio.h>
int main(void){
	char op;
	float total,num1,num2;
	printf("Enter a operator(+,-,*,/): ");
	op = getchar();
	printf("Enter num1: ");
	scanf("%f",&num1);	
	printf("Enter num2: ");
	scanf("%f",&num2);
		
	switch(op){
		
		case '+':
			total = num1+num2;
			printf("Answer is: %.2f",total);
			break;
		case '-':
			total = num1-num2;
			printf("Answer is: %.2f",total);
			break;
		case '*':
			total = num1*num2;
			printf("Answer is: %.2f",total);
			break;
		case '/':
			total = num1/num2;
			printf("Answer is: %.2f",total);
			break;
	}
	
	return 0;
}

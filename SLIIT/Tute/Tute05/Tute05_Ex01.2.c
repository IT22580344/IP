#include <stdio.h>
int main(void)
{	
	int num = 0;
	printf("If you wanna stop loop please enter negative number\n");
	while(num>=0){
		printf("Enter a number: ");
		scanf("%d",&num);
	}
	printf("Loop stopped, you entered negative number\n");







	return 0;	
}

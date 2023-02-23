#include <stdio.h>
int main(void)
{	
	int num = 0;
	int sum = 0;
	int avg = 0;
	int count = -1;
	printf("If you wanna stop loop please enter negative number\n");
	while(num>=0){
		count+=1;
		sum = sum+num;
		printf("Enter a number: ");
		scanf("%d",&num);
	}
	printf("Loop stopped, you entered negative number\n");
	printf("Sum is :%d\n",sum);
	avg = sum/count;
	printf("Average is :%d\n",avg);
	return 0;	
}

#include <stdio.h>
int main(void)
{
	
	char num[5];
	
	printf("Enter five digit number: ");
	scanf("%s",&num);
	
	int i = 0;
	while (i<=5){
		printf("%c ",num[i]);
		i++;
	}
	
	
	return 0;
}

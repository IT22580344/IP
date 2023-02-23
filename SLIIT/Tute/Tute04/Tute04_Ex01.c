#include <stdio.h>
int main(void){
	int num;
	printf("Enter a Integer: ");
	scanf("%d",&num);
	if(num>=0){
		printf("%d",num);
	}
	if(num<0){
		num=num*-1;
		printf("%d",num);
	}
	return 0;
}

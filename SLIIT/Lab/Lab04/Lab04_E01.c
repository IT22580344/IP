#include <stdio.h>
int main(void)
{
	int total,angle1,angle2,angle3;
	
	printf("Enter angle1: ");
	scanf("%d",&angle1);
	printf("Enter angle2: ");
	scanf("%d",&angle2);
	printf("Enter angle3: ");
	scanf("%d",&angle3);
	
	total = angle1+angle2+angle3;
	
	if(total==180){
		printf("triangle can be formed");
	}
	else{
		printf("triangle can't be formed");
	}
	return 0;
}

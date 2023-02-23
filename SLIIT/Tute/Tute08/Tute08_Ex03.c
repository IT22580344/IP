#include <stdio.h>
int main(void)
{
	int motion[5];
	int i,temp;
	//get user input
	for(i=0;i<5;i++){
		printf("Enter a number: ");
		scanf("%d",&motion[i]);
	}
	//print array
	for(i=0;i<5;i++){
		printf("%d ",motion[i]);
	}
	
	// 1,2,3,4,5
	temp = motion[0];
	for(i=0;i<5;i++){
		motion[i] = motion[i+1];
	}
	motion[4] = temp;
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",motion[i]);
	}
	return 0;
}

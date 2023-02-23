//find mean of marks
#include <stdio.h>
int main(void)
{
	int marks[10];
	int i,m,sum=0;
	float avg;
	for(i=0;i<10;i++){
		
		printf("Enter marks: ");
		scanf("%d",&m);
		
		if(m>0 && m<=20){
			marks[i] = m;
			sum = sum+m;
		}
		else{
			printf("Invalid number\n");

		}
		
	}
	
	//for display array
	for(i=0;i<10;i++){
		printf("%d ",marks[i]);
		
	}
	avg = sum/10.0;
	printf("\n");
	printf("Average is %f",avg);
	return 0;
}

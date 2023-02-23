#include <stdio.h>
int main(void)
{
	int marks[10];
	int i,m;
	for(i=0;i<10;i++){
		
		printf("Enter marks: ");
		scanf("%d",&m);
		
		if(m>0 && m<=20){
			marks[i] = m;
		}
		else{
			printf("Invalid number\n");

		}
		
	}
	
	for(i=0;i<10;i++){
		printf("%d ",marks[i]);
	}
	return 0;
}

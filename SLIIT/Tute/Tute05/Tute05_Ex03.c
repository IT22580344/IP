#include <stdio.h>
int main (void)
{

	int stu = 1;
	while (stu<=3){
		printf("Student %d\n",stu);
		int i = 1;
		int marks = 0;
		int total = 0;
		while(i<=4){
			printf("Enter module %d marks: ",i);
			scanf("%d",&marks);
			total+=marks;
			i++;
		}
		stu++;
		printf("Total is : %d\n",total);
	}
	
	
	
	
	
	
	
	return 0;
}

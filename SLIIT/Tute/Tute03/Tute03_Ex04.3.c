#include <stdio.h>
int main(void)
{
	float mark;
	printf("Enter Ip module Mark: ");
	scanf("%f",&mark);
	
//	printf("%.2f",mark);
	if (100>=mark&& mark>=80){
		printf("Grade A");
	}	
		else if (79>=mark&& mark>=70){
		printf("Grade B");
		}	
		else if (69>=mark&& mark>=45){
		printf("Grade C");
		}
		else if (mark<45){
		printf("Grade F");
		}
		else{
			printf("Invalid number");
		}
	return 0;
}

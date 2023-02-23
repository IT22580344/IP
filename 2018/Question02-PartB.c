#include <stdio.h>
int main(void)
{
	char arr[4][4]={{'R','B','G','B'},{'B','G','R','G'},{'G','G','R','G'},{'B','B','R','R'}};
	int i,j;
	char colour;
	
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%c ",arr[i][j]);
		}
		puts("");
	}
	printf("Enter the color of LED: ");
	scanf("%c",&colour);
	
	printf("\n\LED bulb positions\n");
		
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[i][j]==colour){
				printf("[%d,%d] ",i,j);
			}
		}
	}
	return 0;
}

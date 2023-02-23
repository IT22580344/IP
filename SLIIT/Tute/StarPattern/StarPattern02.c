#include <stdio.h>
int main(void)
{
	int n;
	int i;
	int j;
	printf("Enter num of rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

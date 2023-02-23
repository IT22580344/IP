#include <stdio.h>
int main(void){
	int arr[] = {1,2,9,4,5,8,7,3,6,8};
	int i,j;
	printf("Element\tValue\tHistogram\n");
	for(i=0;i<10;i++){
		printf("%d\t%d\t",i,arr[i]);
		for(j=1;j<=arr[i];j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

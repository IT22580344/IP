//2019 - Question04
#include <stdio.h>

int main(void){
	int i;
	for(i=0;i<5;i++){
	char name[30];
	char lNumber[15];
	char fname[30];
	char flNumber[15];
	int count = 1;
	
	FILE*cfPtr;
	FILE*abc;
	cfPtr = fopen("loyalty.dat","a+");
	if(cfPtr == NULL){
		printf("Can't Open File");
		return -1;
		
	}
	
	printf("Input Name: ");
	scanf("%s",name);
	printf("Input Loyalty Number: ");
	scanf("%s",lNumber);
	
	while(1){
	int ret =fscanf(cfPtr,"%s",flNumber);
		if(ret == EOF){
			break;
		}
		fscanf(cfPtr,"%s",fname);
		
		if(strcmp(flNumber,lNumber)==0){
			printf("This number already exits\n");
		}
		else{
			count = 1;
		}
	}
	if(count == 1){
		fprintf(cfPtr,"\n%s %s",lNumber,name);
	}
	
	fclose(cfPtr);
	}
	return 0;
}


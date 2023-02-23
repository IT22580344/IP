#include <stdio.h>
int main(void){
	int num,rem,a,b,c,d,e;
	printf("Enter 5 digit number : ");
	scanf("%d",&num);
	if(9999<num && num<100000){
		a = num/10000;
		rem = num%10000;
		b = rem/1000;
		rem = rem%1000;
		c = rem/100;
		rem = rem%100;
		d = rem/10;
		rem = rem%10;
		e = rem/1;
		rem = rem%1;
		printf("%d\t%d\t%d\t%d\t%d",a,b,c,d,e);	
	}
	else{
		printf("invalid number");
	}
	
	return 0;
}

#include <stdio.h>
#include <assert.h>
float calDiscount(int time,float totAmount);
void displayGift(float finalTot);
void testCalDiscount();
int main(void)
{
	int time;
	float totAmount,finalTot,discount;
	
	testCalDiscount();
	printf("Enter Time: ");
	scanf("%d",&time);
	printf("Enter Total Amount: ");
	scanf("%f",&totAmount);
	discount = calDiscount(time,totAmount);
	finalTot = totAmount - discount;
	
	printf("\nDiscount: %f\n",discount);
	printf("Final Amount: %f\n",finalTot);
	displayGift(finalTot);
	
	return 0;
}
float calDiscount(int time,float totAmount)
{
	float discount;
	if(time>=16 && time<=19){
		if(totAmount>=5000){
			discount = totAmount*0.1;
		}
		else if(totAmount>=2500 && totAmount<5000){
			discount = totAmount*0.07;
		}
	}
	else if(time>=20 && time<=22){
		if(totAmount>=5000){
			discount = totAmount*0.12;
		}
		else if(totAmount>=2500 && totAmount<5000){
			discount = totAmount*0.09;
		}
	}
	else{
		discount = 0;
	}
	return discount;
}
void displayGift(float finalTot){
	if(finalTot>=7000){
		printf("Packet Of Milk");
	}
	else if(finalTot>5000 && finalTot<7000){
		printf("1kg of Sugar");
	}
	else if(finalTot>3000 && finalTot<5000){
		printf("Pack of 6 Eggs");
	}
}
void testCalDiscount(){
	assert(calDiscount(16,5500)==550);
	assert(calDiscount(20,10000)==1200);
}


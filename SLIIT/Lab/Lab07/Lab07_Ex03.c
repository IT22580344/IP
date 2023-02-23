#include <stdio.h>
#include <assert.h>
float calPayment(char pkgType); // function declaration
float calDiscount(int age, float bill); // function declaration
void testDiscount();
int main(void)
{
	testDiscount();
	char pkgType;
	int age;
	float bill,fBill;
	
	printf("Enter Package Type: ");
	scanf(" %c",&pkgType);	
	printf("Enter Your Age: ");
	scanf("%d",&age);

	
	bill = calPayment(pkgType);
	if(pkgType == 'H'){
		bill = calDiscount(age, bill);
	}
	
	printf("Total is: %.2f",bill);
	return 0;
}

float calPayment(char pkgType){
	if(pkgType == 'S')
	{
		return 15000;	
	}
	else if(pkgType == 'C')
	{
		return 50000;	
	}
	else if(pkgType == 'H')
	{
		return 30000;			
	}
	
}

float calDiscount(int age, float bill){
	float discount;
	if(age>=60){
		discount = bill*0.1;
		bill = bill-discount;
		return bill;
	}
	else{
		return bill;
	}
}

void testDiscount(){
	assert(calDiscount(50,30000)==30000);
	assert(calDiscount(65,30000)==27000);
}

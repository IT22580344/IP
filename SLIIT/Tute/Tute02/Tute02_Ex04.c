#include <stdio.h>
struct item {
		
		int itemNo;
		double price;
		int quantity;
		
	}item2; // Create structer variable
int main(){
	
	struct item item1; // Create structur variable

	
	item1.itemNo = 1;
	item1.price;
	item1.quantity;

	item2.itemNo = 2;
	item2.price;
	item2.quantity;

	printf("Enter Item 1 price: ");
	scanf("%lf",&item1.price);
	printf("Enter Item 1 quantity: ");
	scanf("%d",&item1.quantity);
	
	printf("\n");
	
	printf("Enter Item 2 price: ");
	scanf("%lf",&item2.price);
	printf("Enter Item 2 quantity: ");
	scanf("%d",&item2.quantity);
	
	printf("\n\n");
	printf("Item No:%d\n",item1.itemNo);
	printf("Price:%.2lf\n",item1.price);
	printf("quantity:%d\n",item1.quantity);
	
	printf("\n\n");
	printf("Item No:%d\n",item2.itemNo);
	printf("Price:%.2lf\n",item2.price);
	printf("quantity:%d\n",item2.quantity);
	return 0;
}

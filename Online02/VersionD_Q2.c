#include <stdio.h>
float calculateTotalCost(int itemNo,int quantity);//function declaration
void printDetails(int item_no, int quantity, float totalCost);//function declaration

int main(void) // implement main function
{
    //variable declaration
    int itemNo,quantity,totalCost;

    //getting inputs from user
    printf("Enter itemNo: ");
    scanf("%d",&itemNo);
    printf("Enter Quantity: ");
    scanf("%d",&quantity);

    totalCost = calculateTotalCost(itemNo,quantity); //call calculateTotalCost function and put value in to totalCost variable
    printDetails(itemNo,quantity,totalCost);
    return 0; // end of main function
}
// function implementation
float calculateTotalCost(int itemNo,int quantity)
{
    //check condition and return value to totalCost
    if(itemNo==1)
        return 100.00*quantity;
    else if(itemNo==2)
        return 200.00*quantity;
    else if(itemNo==3)
        return 300.00*quantity;
}

// function implementation
void printDetails(int item_no, int quantity, float totalCost)
{
    printf("\n");
    printf("Item No: %d\n",item_no);
    printf("Quantity: %d\n",quantity);
    printf("Total Cost: %.2f\n",totalCost);
}

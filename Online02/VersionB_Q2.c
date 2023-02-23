#include <stdio.h>
//declare functions
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

int main(void)
{
    //declare variables
    int guests;
    float charge,discount,amountX;

    //get input from user
    printf("Enter number of guests: ");
    scanf("%d",&guests);
    printf("Enter charge per guest: ");
    scanf("%f",&charge);

    //display discount
    discount = getDiscountPrice(guests,charge);
    printf("Discount: %.2f\n",discount);
    //display amount to be paid
    amountX = getAmount(guests,charge,discount);
    printf("Amount: %.2f",amountX);
    return 0;
}

//function implementation
float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
    float Hcharge,discount;
    if(noOfGuests>200){
        Hcharge = noOfGuests*chargePerGuest;
        discount = Hcharge*0.1;
        return discount;
    }
    else{
        discount = 0.00;
    }
}
float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
    float amount;
    amount = (noOfGuests*chargePerGuest)-discount;
    return amount;
}


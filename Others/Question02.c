#include <stdio.h>
int main(void){
    int type;
    float billAmount,discount, discountAmount,finalAmount;
    printf("Customer Type: ");
    scanf("%d",&type);

    printf("Bill Amount: ");
    scanf("%f",&billAmount);

    //for registered customer
    if(type == 1){
        if(billAmount<=2000){
            discount = 0.15;
            discountAmount = billAmount*discount;
            finalAmount = billAmount-discountAmount;
        }
        else if(billAmount>2000){
            discount = 0.25;
            discountAmount = billAmount*discount;
            finalAmount = billAmount-discountAmount;
        }
    }

    else if(type == 2){
        if(billAmount>3000){
            discount= 0.15;
            discountAmount = billAmount*discount;
            finalAmount = billAmount-discountAmount;
        }
    }

    printf("Discount Amount: RS %.2f\n",discountAmount);
    printf("Final Bill Amount: RS %.2f",finalAmount);

    return 0;
}

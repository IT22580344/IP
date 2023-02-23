#include <stdio.h>
int main(void){
    char cusType;
    float billAmount, discountAmount,finalAmount;

    printf("Customer Type: ");
    scanf("%c",&cusType);

    printf("Enter Bill Amount: ");
    scanf("%f",&billAmount);

    if(cusType=='1'){
        if(billAmount<=2000){
            discountAmount = billAmount*0.15;
            finalAmount = billAmount-discountAmount;
        }
         else if(billAmount>2000){
            discountAmount = billAmount*0.25;
            finalAmount = billAmount-discountAmount;
        }
    }
    else if(cusType=='2'){
        if(billAmount>3000){
            discountAmount = billAmount*0.15;
            finalAmount = billAmount-discountAmount;
        }
    }

    printf("Discount Amount: Rs %.2f\n",discountAmount);
    printf("Final Bill Amount: Rs %.2f\n",finalAmount);
    return 0;
}

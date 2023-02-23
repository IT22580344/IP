#include <stdio.h>
int main(void){
    int customerType;
    float billAmount,discountAmount,finalAmount;

    printf("Customer Type: ");
    scanf("%d",&customerType);

    printf("Enter Bill Amount: ");
    scanf("%f",&billAmount);

    if(customerType==1){
        if(billAmount<=2500){
            discountAmount = billAmount*0.05;
            finalAmount=billAmount-discountAmount;

        }
        else if(billAmount>2500){
            discountAmount = billAmount*0.10;
            finalAmount=billAmount-discountAmount;

        }
    }

    else if(customerType==2){
        if(billAmount>5000){
            discountAmount = billAmount*0.10;
            finalAmount=billAmount-discountAmount;

        }
    }
    printf("Discount Amount:RS %.2f \n",discountAmount);
    printf("Final Bill Amount:RS %.2f \n",finalAmount);
    return 0;
}

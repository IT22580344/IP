#include <stdio.h>
int main(void){
    //declare variables
    int cusType;
    float billAmount,discountAmount,finalAmount;

    //Get input from user
    printf("Customer Type: ");
    scanf("%d",&cusType);

    printf("Bill Amount: ");
    scanf("%f",&billAmount);


    //loyalty customer
    if(cusType==1){
        if(billAmount<=2500){
            discountAmount = billAmount*0.05;
            finalAmount = billAmount - discountAmount;
        }
        else if(billAmount>2500){
            discountAmount = billAmount*0.10;
            finalAmount = billAmount - discountAmount;
        }
    }


    else if(cusType==2){
        if(billAmount>5000){
            discountAmount = billAmount*0.10;
            finalAmount = billAmount - discountAmount;
        }
        else{
            discountAmount = billAmount*0;
            finalAmount = billAmount - discountAmount;
        }
    }

    printf("\nCustomer Type:%d\n",cusType);
    printf("Bill Amount:%.2f\n",billAmount);
    printf("Discount Amount:Rs.%.2f\n",discountAmount);
    printf("Final Bill Amount:Rs.%.2f\n",finalAmount);


    return 0;
}

#include <stdio.h>
int main(void)
{
    //variable declaration
    int years,units;
    float commission;

    //getting input from user
    printf("no of years worked: ");
    scanf("%d",&years);
    printf("number of units sold: ");
    scanf("%d",&units);

    //check conditon
    if(years>2){
            if(units>100){
                commission = 3500.00*units;
            }
            else if(units>31 && units<=100){
                commission = 2500.00*units;
            }
            else if(units<=30){
                commission = 1000.00*units;
            }
    }

    if(years<=2){
        commission = 0.00;
    }

    printf("\nno of years worked:%d \n",years);
    printf("number of units sold:%d \n",units);
    printf("commission:%.2f",commission);

    return 0;
}

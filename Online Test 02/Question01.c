#include <stdio.h>
int main(void)
{
    int cusType,units;
    float charge,surchage;

    printf("Customer Type: ");
    scanf("%d",&cusType);

    printf("Number of Units: ");
    scanf("%d",&units);

    if(units<=100){
        charge = 10.00* units;
    }
    else if(units>100){
        charge = 10.00*100;
        charge = charge + (30.00*(units-100));
    }

    if(cusType==1 && units>100){
        surchage = charge*0.2;
        charge+=surchage;
    }

    printf("\nCustomer Type: %d\n",cusType);
    printf("Number of unit: %d\n",units);
    printf("Monthly charge: Rs.%.2f",charge);
    return 0;
}

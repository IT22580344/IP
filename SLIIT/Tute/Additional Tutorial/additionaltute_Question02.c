#include <stdio.h>
int main(void) {
    float distance;
    float deliveryCharge;
    printf("Enter Distance(km): ");
    scanf("%f",&distance);

    if(distance<=3){
        deliveryCharge = distance*50;
        printf("Total Delivery Charge: %.2f",deliveryCharge);
    }
    else if(distance>3 && distance<=8){
        deliveryCharge = (3*50)+ (distance-3)*75;
        printf("Total Delivery Charge: %.2f",deliveryCharge);
    }
    else if(distance>8 && distance<=15){
        deliveryCharge = (3*50)+ (5*75)+(distance-8)*125;
        printf("Total Delivery Charge: %.2f",deliveryCharge);
    }
    else if(distance>15){
        deliveryCharge = (3*50)+ (5*75)+ (7*125)+ (distance-15)*150;
        printf("Total Delivery Charge: %.2f",deliveryCharge);
    }
    return 0;
}

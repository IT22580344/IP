#include <stdio.h>
int main(){
    int itemNum=0;
    int item1c=0,item2c=0,item3c=0;
    float total1=0,total2=0,total3=0,total;

    while(itemNum != -1){
        printf("Enter ItemNumber(1,2,3): ");
        scanf("%d",&itemNum);
        if(itemNum>3){
            printf("Invalid ItemNumber\n");
            continue;
        }
        if(itemNum==1){
            item1c++;
            total1+=300;
        }
        else if(itemNum==2){
            item2c++;
            total2+=450;
        }
        else if(itemNum==3){
            item3c++;
            total3+=500;
        }

    }
    total = total1+total2+total3;
    printf("Item 1 cost: %d * 300 = %.2f\n",item1c,total1);
    printf("Item 2 cost: %d * 450 = %.2f\n",item2c,total2);
    printf("Item 3 cost: %d * 500 = %.2f\n\n",item3c,total3);
    printf("Your total cost:%.2f",total);



    return 0;
}

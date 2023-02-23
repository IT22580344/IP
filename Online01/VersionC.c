#include <stdio.h>
int main(void)
{
    int option,amount,toption;
    char size,top;
    float total;

    printf("Enter pizza option(1,2,3): ");
    scanf("%d",&option);
    printf("Enter size(P,M,L): ");
    scanf(" %c",&size);
    printf("Enter amount: ");
    scanf("%d",&amount);

    if(option==1)
    {
        switch(size)
        {
            case 'p':
            case 'P':total = 560.00*amount;
                     break;


            case 'm':
            case 'M':total = 920.00*amount;
                     break;

            case 'l':
            case 'L':total = 1800.00*amount;
                     break;
        }
    }

    else if(option==2)
    {
        switch(size)
        {
            case 'p':
            case 'P':total = 340.00*amount;
                     break;


            case 'm':
            case 'M':total = 660.00*amount;
                     break;

            case 'l':
            case 'L':total = 1300.00*amount;
                     break;
        }
    }

    else if(option==3)
    {
        switch(size)
        {
            case 'p':
            case 'P':total = 760.00*amount;
                     break;


            case 'm':
            case 'M':total = 1100.00*amount;
                     break;

            case 'l':
            case 'L':total = 2100.00*amount;
                     break;
        }
    }

    while(1)
    {
        printf("Do you need any extra toppings?(Y,N)");
        scanf(" %c",&top);

        if(top=='Y'||top=='y')
        {
            printf("Enter topping option(1,2,3,4): ");
            scanf("%d",&toption);

            switch(toption)
            {
                case 1: total+=320*amount; break;
                case 2: total+=140*amount; break;
                case 3: total+=130*amount; break;
                case 4: total+=150*amount; break;
            }
        }
        else if(top=='N'||top=='n')
        {
            printf("Total price: %.2f",total);
            break;
        }
    }
    return 0;
}

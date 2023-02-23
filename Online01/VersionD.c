#include <stdio.h>

int main(void)
{
    int aOption,nSeats,eOption;
    char sType,eService;
    float total;

    printf("Enter Airline Option(1,2,3,4): ");
    scanf("%d",&aOption);
    printf("Enter seat type(E,B): ");
    scanf(" %c",&sType);
    printf("Enter number of seats booked: ");
    scanf("%d",&nSeats);

    switch(aOption){
        case 1:
            switch(sType){
                case 'e':
                case 'E':
                    total = 36500.00*nSeats;
                    break;
                case 'b':
                case 'B':
                    total = 77600.00*nSeats;
                    break;
            }
            break;

        case 2:
            switch(sType){
                case 'e':
                case 'E':
                    total = 35800.00*nSeats;
                    break;
                case 'b':
                case 'B':
                    total = 76500.00*nSeats;
                    break;
            }
            break;
        case 3:
            switch(sType){
                case 'e':
                case 'E':
                    total = 54600.00*nSeats;
                    break;
                case 'b':
                case 'B':
                    total = 84700.00*nSeats;
                    break;
            }
            break;
        case 4:
            switch(sType){
                case 'e':
                case 'E':
                    total = 28500.00*nSeats;
                    break;
                case 'b':
                case 'B':
                    total = 42800.00*nSeats;
                    break;
            }
            break;

    }

    while(1){
        printf("Do you need any extra service?(Y,N)");
        scanf(" %c",&eService);
        if(eService=='y'|| eService=='Y')
        {
            printf("Enter Extra services Do you want(1,2,3,4): ");
            scanf("%d",&eOption);

            switch(eOption){
                case 1: total+=7800;
                break;
                case 2: total+=1500;
                break;
                case 3: total+=19500;
                break;
                case 4: total+=2000;
                break;
            }
        }
        else if(eService=='n'|| eService=='N')
        {
            printf("Total is %.2f",total);
            break;
        }
    }

    return 0;
}

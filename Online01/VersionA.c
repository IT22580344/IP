#include <stdio.h>

int main(void){
    int roomType,days;
    char accType,cardType;
    float fAmount,discount,total;

    while(1){
        printf("Enter type of room: ");
        scanf("%d",&roomType);
        if(roomType==-1)
        break;
        if(roomType<=0 || roomType>3){
            printf("Invalid Type of room \n");
            continue;
        }
        printf("Enter Accommodation Basis(F/H): ");
        scanf(" %c",&accType);

        printf("Enter No of days: ");
        scanf("%d",&days);

        printf("Enter Reward Card Type ( G, S, B ): ");
        scanf(" %c",&cardType);

        if(cardType=='G'||cardType=='g'){
                if(accType=='F'|| accType=='f'){
                        switch(roomType){
                            case 1: total = (25555.00*days)*0.125;
                                    break;
                            case 2: total = (17500.00*days)*0.125;
                                    break;
                            case 3: total = (9000.00*days)*0.125;
                                    break;
                        }
                }
                else if(accType=='H' || accType=='h'){
                        switch(roomType){
                            case 1: total = (17250.00*days)*0.125;
                                    break;
                            case 2: total = (12250.00*days)*0.125;
                                    break;
                            case 3: total = (7250.00*days)*0.125;
                                    break;
                }
        }
        if(cardType=='S'||cardType=='s'){
                if(accType=='F'|| accType=='f'){
                        switch(roomType){
                            case 1: total = (25555.00*days)*0.115;
                                    break;
                            case 2: total = (17500.00*days)*0.115;
                                    break;
                            case 3: total = (9000.00*days)*0.115;
                                    break;
                        }
                }

                else if(accType=='H' || accType=='h'){
                        switch(roomType){
                            case 1: total = (17250.00*days)*0.115;
                                    break;
                            case 2: total = (12250.00*days)*0.115;
                                    break;
                            case 3: total = (7250.00*days)*0.115;
                                    break;
                        }
                }
        }
        if(cardType=='B'||cardType=='b'){
                if(accType=='F'|| accType=='f'){
                        switch(roomType){
                            case 1: total = (25555.00*days)*0.095;
                                    break;
                            case 2: total = (17500.00*days)*0.095;
                                    break;
                            case 3: total = (9000.00*days)*0.095;
                                    break;
                        }
                }

                else if(accType=='H' || accType=='h'){
                        switch(roomType){
                            case 1: total = (17250.00*days)*0.095;
                                    break;
                            case 2: total = (12250.00*days)*0.095;
                                    break;
                            case 3: total = (7250.00*days)*0.095;
                                    break;
                        }
                }

        }

    }
    printf("Your fee is %f",total);
    return 0;
    }
}

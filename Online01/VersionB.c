#include <stdio.h>

int main(void)
{
    int option,guest,days,adpkgnum;
    char adpkg;
    float total;
    printf("Enter Option(1,2,3): ");
    scanf("%d",&option);
    printf("Enter Number of guest: ");
    scanf("%d",&guest);
    printf("Enter Number of days: ");
    scanf("%d",&days);

    //calculate total
    if(option==1){
        if(guest<=2)
            total = 45000*guest*days;
        if(guest>=3 || guest<=5)
            total = 44000*guest*days;
        if(guest>5)
            total = 43000*guest*days;
    }
    else if(option==2){
        if(guest<=2)
            total = 40000*guest*days;
        if(guest>=3 || guest<=5)
            total = 38000*guest*days;
        if(guest>5)
            total = 35000*guest*days;
    }
    else if(option==3){
        if(guest<=2)
            total = 37000*guest*days;
        if(guest>=3 || guest<=5)
            total = 35000*guest*days;
        if(guest>5)
            total = 32000*guest*days;
    }


    while(1)
    {
        printf("Do you need to include any other package?(Y,N): ");
        scanf(" %c",&adpkg);

        if(adpkg=='y'||adpkg=='Y')
        {
            printf("Enter additional pkgnumber(1,2,3,4):");
            scanf("%d",&adpkgnum);

            switch(adpkgnum)
            {
                case 1: total+=3500*guest;
                        break;
                case 2: total+=1000*guest;
                        break;
                case 3: total+=1500*guest;
                        break;
                case 4: total+=2000*guest;
                        break;
            }
        }
        else if(adpkg=='n'||adpkg=='N'){
            printf("Total is %.2f",total);
            break;
        }
    }


    return 0;
}

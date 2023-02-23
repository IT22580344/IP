#include <stdio.h>
int main(void){
    char Itype,fORi,ctnu;
    int nChild;
    float total;

    printf("Insurance type: ");
    scanf(" %c",&Itype);
    printf("Family or Individual(F,I): ");
    scanf(" %c",&fORi);

    if(Itype=='A'||Itype=='a'){
        if(fORi=='i'||fORi=='I'){
            total = 4500.00;
        }
        else if(fORi=='f'||fORi=='F'){
                total = 5200.00;
                printf("Number of children: ");
                scanf("%d",&nChild);
                if(nChild>2){
                    total=total+ (520.00*(nChild-2));
            }
        }
    }


    else if(Itype=='N'||Itype=='n'){
        if(fORi=='i'||fORi=='I'){
            total = 3100.00;
        }
        else if(fORi=='f'||fORi=='F'){
                total = 4300.00;
                printf("Number of children: ");
                scanf("%d",&nChild);
                if(nChild>2){
                    total=total+ (430.00*(nChild-2));
            }
        }
    }

    else if(Itype=='D'||Itype=='d'){
        if(fORi=='i'||fORi=='I'){
            total = 3600.00;
        }
        else if(fORi=='f'||fORi=='F'){
                total = 4800.00;
                printf("Number of children: ");
                scanf("%d",&nChild);
                if(nChild>2){
                    total=total+ (520.00*(nChild-2));
            }
        }
    }

    else if(Itype=='S'||Itype=='s'){
        if(fORi=='i'||fORi=='I'){
            total = 3300.00;
        }
        else if(fORi=='f'||fORi=='F'){
                total = 3800.00;
                printf("Number of children: ");
                scanf("%d",&nChild);
                if(nChild>2){
                    total=total+ (380.00*(nChild-2));
            }
        }
    }

    else{
        printf("Invalid Insurance Type !");
    }
    printf("Total Amount: %.2f",total);
    return 0;

}

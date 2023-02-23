#include <stdio.h>
int main(void){
    int pkgNum;
    int person;
    int days;
    float total;
    float discount;
    printf("Enter Pkg Num: ");
    scanf("%d",&pkgNum);
    printf("Enter Person: ");
    scanf("%d",&person);
    printf("Enter Days: ");
    scanf("%d",&days);

    if(pkgNum==1){
        discount = 8000*0.03;
        total = (8000-discount)*person*days;
    }

    else if(pkgNum==2){
        discount = 9500*0.05;
        total = (9500-discount)*person*days;
    }

    else if(pkgNum==3){
        discount = 12500*0.07;
        total = (12500-discount)*person*days;
    }

    printf("Total fee:%.2f",total);
    getchar();

    return 0;
}


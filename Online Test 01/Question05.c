#include <stdio.h>
int main(void)
{
    char bookType;
    int noOFDays;
    float rental, rentalperDay,adcost;

    printf("BookType: ");
    scanf(" %c",&bookType);

    printf("Rented days: ");
    scanf("%d",&noOFDays);

    //rental amount
    if(bookType=='1'){
        rentalperDay = 10;
        rental = rentalperDay*noOFDays;
    }
    else if(bookType=='2'){
        rentalperDay = 8;
        rental = rentalperDay*noOFDays;
    }

    if(noOFDays>14){
        adcost = rental*0.1;
        rental = rental+adcost;
    }

    printf("Rental per day: %.2f\n",rentalperDay);
    printf("Rental Amount: %.2f\n",rental);

    return 0;
}

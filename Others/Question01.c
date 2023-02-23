#include <stdio.h>
int main(void)
{
    int month;
    float bSalary,bonus;

    printf("Enter number of months worked: ");
    scanf("%d",&month);

    printf("Enter basic Salary: ");
    scanf("%f",&bSalary);

    if(month<6){
        bonus = 0.00;
        printf("Bonus:%.2f",bonus);
    }

    else if(month>=6)
    {    if(month==12 && bSalary<=45000.00){
                bonus = bSalary+ bSalary;
                printf("Bonus:%.2f",bonus);

            }

        else{
            bonus = month*bSalary;
                printf("Bonus:%.2f",bonus);
        }
    }
    return 0;
}

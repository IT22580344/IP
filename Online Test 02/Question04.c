#include <stdio.h>
int main(void)
{
    int courseNo;
    float marks,discount,fee;

    printf("Course no: ");
    scanf("%d",&courseNo);
    printf("Aptitude test marks: ");
    scanf("%f",&marks);

    if(courseNo==1){
        if(marks>=80 && marks<=100){
            discount = 150000*0.075;
            fee = 150000-discount;
        }
        else if(marks<80){
            discount = 0.00;
            fee = 150000;
        }
    }

    if(courseNo==2){
        if(marks>=80 && marks<=100){
            discount = 175000*0.075;
            fee = 175000-discount;
        }
        else if(marks<80){
            discount = 0.00;
            fee = 175000;
        }
    }


    printf("\nCourse no:%d\n",courseNo);
    printf("Aptitude test marks:%.2f\n",marks);
    printf("Discount:%.2f\n",discount);
    printf("Course fee:%.2f\n",fee);
    return 0;
}

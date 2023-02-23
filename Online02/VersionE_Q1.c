#include <stdio.h>
int main(void)
{
    int max,min,marks,first=1;
    while(1){
        printf("Enter marks: ");
        scanf("%d",&marks);
        if(marks==-99){
            break;
        }
        if(marks>100 || marks<0){
            printf("Invalid marks\n");
            continue;
        }

        if(first==1){
            max = marks;
            min = marks;
            first = 0;
        }

        if(marks>max){
            max = marks;
        }
        if(marks<min){
            min = marks;
        }

    }
    printf("Max is: %d\n",max);
    printf("Min is: %d\n",min);

    return 0;
}

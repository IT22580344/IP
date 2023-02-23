#include <stdio.h>
int main(void)
{
    float data[12],max,min;
    int i,x=0;
    //getting inputs from
    for(i=0;i<12;i++)
    {
        printf("Enter month %d rainfall: ",i+1);
        scanf("%f",&data[i]);
    }
    //find maximum and minimum rainfall
    for(i=0;i<12;i++){
        if(x==0){
            max = data[i];
            min = data[i];
            x = 1;
        }
        if(data[i]>max)
            max = data[i];
        else if(data[i]<min)
            min = data[i];
    }

    printf("Max is %f\n",max);
    printf("Min is %f\n",min);
    return 0;
}

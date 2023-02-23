//Question02_b
#include <stdio.h>
int main(void)
{
    int identityArr[4][4];
    int i,j,identity = 1;

    //get inputs from user
    for(i=0;i<4;i++)
    {
        printf("Values for row %d\n",i+1);
        for(j=0;j<4;j++)
        {
            printf("\tEnter element %d: ",j+1);
            scanf("%d",&identityArr[i][j]);
        }
    }

    // print array
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",identityArr[i][j]);
        }
        printf("\n");
    }

    //check identity array or not
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++){
            if(i == j && identityArr[i][j] != 1){
                identity = 0;
                break;
            }
            if(i != j && identityArr[i][j] != 0){
                identity = 0;
                break;
            }

        }
    }

    printf("\n\n");
    if(identity == 0){
        printf("This is not a Identity Matrix");
    }
    else if(identity == 1){
        printf("Huray this is a Identity Matrix");
    }

}

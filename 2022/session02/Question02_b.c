#include <stdio.h>
int main(void)
{
    int image[4][4];
    int temp[4][4];
    int i,j;

    for(i=0;i<4;i++){
            printf("Values for row %d\n",i+1);
        for(j=0;j<4;j++){
            printf("\tEnter element %d: ",j+1);
            scanf("%d",&image[i][j]);
            if(image[i][j]>55){
                temp[i][j] = 1;
            }
            else if(image[i][j]<55){
                temp[i][j] = 0;
            }
        }
        printf("\n");
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",image[i][j]);
        }
        printf("\n");
    }
    puts("");

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }

    return 0;
}

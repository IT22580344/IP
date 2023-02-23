//Question02_a , rotate right or left
#include <stdio.h>
int main(void)
{
    int numArr[8];
    int temp[8];
    int i,n;

    //get inputs from user
    for(i=0;i<8;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&numArr[i]);
    }
    //print original array
    printf("\n\n Original array\n");
    for(i=0;i<8;i++)
    {
        printf("%d ",numArr[i]);
    }
    printf("\n\nEnter n: ");
    scanf("%d",&n);

    //assing value to temp
    for(i=0;i<8;i++)
    {
        temp[(i+n)%8] = numArr[i]; // to rotate right
        //temp[(i+8-n)%8] = numArr[i] // to rotate left
    }

    //print array
    printf("\n\nRotated array\n");
    for(i=0;i<8;i++)
    {
        printf("%d ",temp[i]);
    }

    return 0;
}

#include <stdio.h>
int main(void)
{
    int value[10] = {12,32,34,85,76,41,32,63,23,84};
    int key,i;

    printf("Enter search key: ");
    scanf("%d",&key);

    for(i=0;i<10;i++)
    {
        if(key==value[i]){
            printf("Index num:%d\n",i);
            return -1;
        }
    }
    printf("Value not found\n");
    return 0;
}

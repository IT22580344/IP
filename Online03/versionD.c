// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num[8];
    int i=0,temp,count=0;
    
    while(1)
    {
        printf("Enter a num between 1-4: ");
        scanf("%d",&temp);

        if(temp>=1 && temp<=4)
        {
            num[i] = temp;
            i++;
            if(i==8){
                break;
            }
        }
        else{
            printf("Please re-enter number\n");
        }
    }
    puts("");
    for(i=0;i<8;i++){
        printf("%d ",num[i]);
    }
    
    for(i=0;i<8;i++)
    {
        if(num[i]==1){
            if(num[i+1]== 3){
                count++;
            }
        }
    }
    
    printf("Count:%d",count);
    return 0;
}

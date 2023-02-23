#include <stdio.h>
int main(void)
{
    int userRating[5]={0};
    int input,i;

    while(1)
    {
        printf("Enter User Ration: ");
        scanf("%d",&input);
        if(input == -99){
            break;
        }
        if(input<1 || input>5){
            printf("Invalid Number\n");
            continue;
        }

        switch(input)
        {
            case 1:
                userRating[0]+=1;
                break;
            case 2:
                userRating[1]+=1;
                break;
            case 3:
                userRating[2]+=1;
                break;
            case 4:
                userRating[3]+=1;
                break;
            case 5:
                userRating[4]+=1;
                break;

        }

    }

    for(i=0;i<5;i++){
        printf("%d\t",i+1);
        while(userRating[i]!=0){
            printf("*");
            userRating[i]-=1;
        }
        printf("\n");
    }

    return 0;
}

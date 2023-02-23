//2022 Session 01 Question 01
#include <stdio.h>
int main(void)
{
    char ch1,ch2;
    int num,i,j;
    printf("Enter 1st character: ");
    scanf(" %c",&ch1);
    printf("Enter 2nd character: ");
    scanf(" %c",&ch2);
    printf("Enter number of lines: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j+=2)
        {
            printf("%c",ch1);
            if(j==i){
                break;
            }
            printf("%c",ch2);
        }
        printf("\n");
    }

    return 0;
}

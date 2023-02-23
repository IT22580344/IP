// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,expo,fnum=1;
    printf("Enter Base: ");
    scanf("%d",&num);
    printf("Enter exponent: ");
    scanf("%d",&expo);

    while(expo>0){
        fnum = fnum*num;
        expo--;
    }
    printf("Answer is: %d",fnum);
    return 0;
}

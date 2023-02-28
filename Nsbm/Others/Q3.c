#include <stdio.h>
int main() {
    int num,fac=1,x;
    printf("Enter a number: ");
    scanf("%d",&num);
    x = num;
    if(x == 0){
        fac = 1;
    }

    while(x>0){
        fac = fac*x;
        x--;
    }

    printf("Factorial of number %d is:%d",num,fac);

    return 0;
}

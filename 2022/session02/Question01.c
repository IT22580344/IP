//2022 Session 02 Question 01
#include <stdio.h>
int main(void)
{
    int num; // variable declaration
    int digit1,digit2,digit3,digit4;
    //getting inputs from user


    while(1){
        printf("Enter a 4 digit Number: ");
        scanf("%d",&num);
        if(num>999 && num<=9999){
            break;
        }
        printf("Invalid number Please re-enter\n\n");
    }
    digit1 = num/1000;
    digit2 = (num/100)%10;
    digit3 = (num/10)%10;
    digit4 = num%10;

    if(digit1==digit4 && digit2==digit3){
        printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }
    return 0;
}

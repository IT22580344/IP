#include <stdio.h>
#include <assert.h>

double calculateAmount(int type, double initial);//function declaration
void printDetails(int type, double initial, double balance); //function declaration
int checkEligibility(double balance);
int main(void){

    return 0;
}
double calculateAmount(int type, double initial){ //function implimentation
    float interest,balance;
    if(type == 1)
        interest = initial*0.04;
    else if(type == 2)
        interest = initial*0.07;
    else if(type == 3)
        interest = initial*0.1;
    balance = initial+interest;
    return balance;
}
void printDetails(int type, double initial, double balance){
    printf("Type: %d",type);
    printf("Initial: %lf",initial);
    printf("Balance: %lf",balance);

}
int checkEligibility(double balance){


}

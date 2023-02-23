//Question03
#include <stdio.h>
#include <assert.h>

//function prototype , function declaration
float calclnterest (int FDType,float depositAmount);
float calcTax(float annuallnterest);
void displayDetails(float interest, float taxAmount);

int main(void)
{
	//declare variables
	int FDType;
	float depositAmount,annualInterest,taxAmount;

    assert(calclnterest(1,10000)==1600);
    assert(calclnterest(2,10000)==1500);

	while(1)
    {
        //Get user inputs
        printf("Fixed Deposit Type : ");
        scanf("%d",&FDType);
        if(FDType==-1)
        {
            break;
        }
        printf("DepositAmount : ");
        scanf("%f",&depositAmount);

        //function calling
        annualInterest = calclnterest(FDType,depositAmount);
        taxAmount = calcTax(annualInterest);
        displayDetails(annualInterest,taxAmount);
    }

	return 0;
}

// function implementation
float calclnterest (int FDType,float depositAmount)
{
	float annualInterestRate,annualInterest;
	if(FDType == 1)
	{
		annualInterestRate = 0.16;
	}
	else if(FDType == 2)
	{
		annualInterestRate = 0.15;
	}
	else if(FDType == 3)
	{
		annualInterestRate = 0.155;
	}
	else if(FDType == 4)
	{
		annualInterestRate = 0.175;
	}
	annualInterest = depositAmount*annualInterestRate;
	return annualInterest;

}
float calcTax(float annuallnterest)
{
	float taxAmount;
	taxAmount = annuallnterest*0.05;
	return taxAmount;

}
void displayDetails(float interest, float taxAmount)
{
	float amountPayable;
	amountPayable = interest - taxAmount;
	printf("\nAnnual Interest\tTax amount\tAmountpayable\n%f\t%f\t%f\n\n",interest,taxAmount,amountPayable);

}

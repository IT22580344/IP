#include <stdio.h>
#include<assert.h>
//function prototype
float calcRemainingFuel (int vehicleType, float usedFuelQuota);
float calcFuelcost (int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);

int main(void)
{	//variable declaration
	int vehicleType;
	float usedFuelQuota;
	float remainingFuelQuota;
	float fuelCost;

	//assert 2 for test calcRemainingFuel
	assert(calcRemainingFuel(1,4)==1);
    assert(calcRemainingFuel(1,3)==2);

    while(1)
    {
        //getting inputs from user
        printf("Enter Vehical Type: ");
        scanf("%d",&vehicleType);

        if(vehicleType == -1){
            break;
        }
        printf("Enter Used fuel quota: ");
        scanf("%f",&usedFuelQuota);

        //function calling
        remainingFuelQuota = calcRemainingFuel(vehicleType,usedFuelQuota);
        fuelCost = calcFuelcost(vehicleType,usedFuelQuota);
        displayDetails(vehicleType,usedFuelQuota,remainingFuelQuota,fuelCost);
    }






	return 0;
}

//function implementation
float calcRemainingFuel (int vehicleType, float usedFuelQuota)
{
	float remainingFuelQuota;
	float allowedFuelQuota;
	switch(vehicleType)
	{
		case 1: allowedFuelQuota = 5;
			break;
		case 2: allowedFuelQuota = 20;
			break;
		case 3: allowedFuelQuota = 20;
			break;
		case 4: allowedFuelQuota = 30;
			break;
	}

	remainingFuelQuota = allowedFuelQuota - usedFuelQuota;
	return remainingFuelQuota;
}
float calcFuelcost (int vehicleType, float usedFuelQuota)
{
	float fuelCost;
	float price;
	switch(vehicleType)
	{
		case 1: price = 370.00;
			break;
		case 2: price = 370.00;
			break;
		case 3: price = 510.00;
			break;
		case 4: price = 370.00;
			break;
	}
	fuelCost = price*usedFuelQuota;
	return fuelCost;
}
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost)
{
	printf("Vehicle type  Quota used  Quota Remaining  Fuel cost\n%d%21f%12f%19f\n\n",vType,usedFuelQuota,remainingQuota,cost);
}

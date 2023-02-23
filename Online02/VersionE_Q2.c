//code for convert the angle given in degrees to radians
#include <stdio.h>

float findRadianValue(float angleInDegrees);//declare a function
void printRadianValues(void);//declare a function
int main(void){
    printRadianValues();//call a function
	return 0;
}
float findRadianValue(float angleInDegrees){ //function implementation
	float pi = 22.0/7;
	return pi/180*angleInDegrees;
}
void printRadianValues(void){ //function implementation
	//Display Output
	printf("Angle(degrees)\tAngle(radian)\n");
	printf("100\t\t\t%f\n",findRadianValue(100));
	printf("120\t\t\t%f\n",findRadianValue(120));
	printf("140\t\t\t%f\n",findRadianValue(140));
	printf("160\t\t\t%f\n",findRadianValue(160));
	printf("180\t\t\t%f\n",findRadianValue(180));
	printf("200\t\t\t%f\n",findRadianValue(200));
}

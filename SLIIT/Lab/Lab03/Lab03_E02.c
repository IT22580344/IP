#include <stdio.h>
int main(void)
{
	float r,h,areaRec,areaCircle,area;
	
	printf("Enter radius of the cylinder : ");
	scanf("%f",&r);
	
	printf("Enter hight of the cylinder : ");
	scanf("%f",&h);
	
	areaRec = 2 * (22 / 7.0)* r * h;
	areaCircle = 2 * (22 / 7.0) * r * r; 
	
	area = areaRec + areaCircle; 
	
	printf("Surface area of cylinder : .1%f\n", area);
	return 0;
}

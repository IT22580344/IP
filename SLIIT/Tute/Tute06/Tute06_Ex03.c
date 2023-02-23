#include <stdio.h>
float pi = 3.142857;
float circleArea(float radius);
float cirlclePeri(float radius);
int main(void)
{

	float radius,height,area,cArea,rArea,farea;
	printf("Enter Radius: ");
	scanf("%f",&radius);

	printf("Enter Height: ");
	scanf("%f",&height);
	
	cArea = 2*circleArea(radius);
	rArea = height*cirlclePeri(radius);
	farea = cArea + rArea;
	printf("%f",farea);
	
}
float circleArea(float radius){
	float area;
	area = pi*radius*radius;
	return area;
}
float cirlclePeri(float radius){
	float peri;
	peri = 2*pi*radius;
	return peri;
}


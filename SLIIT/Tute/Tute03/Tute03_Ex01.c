#include <stdio.h>
int main(void)
{
	float radius,diameter,circumference,area;
	printf("Enter radius: ");
	scanf("%f",&radius);
	
	diameter = radius*2; //wishkambaya
	circumference = 2*(22/7.0)*radius; // paridiya
	area = (22/7.0)*radius*radius;
	printf("Diameter is = %.2f\n",diameter);
	printf("Circumference is = %.2f\n",circumference);
	printf("Area is = %.2f\n",area);
	return 0;
}

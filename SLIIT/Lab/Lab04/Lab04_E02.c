#include <stdio.h>
int main(void){
	char shape;
	float width,length,base,height,radius,area;
	
	printf("Enter the first character of the shape(R,T,C): ");
	scanf("%c",&shape);
	//Rectangle Implementation 
	if(shape == 'R'){
		printf("This is a Rectangle\n");
		printf("Enter width: ");
		scanf("%f",&width);
		printf("Enter length: ");
		scanf("%f",&length);
		
		area = width*length;
		printf("Area of the Rectangle: %.2f",area);
	}
	//Triangle Implementation
	else if(shape == 'T'){
		printf("This is a Triangle\n");
		printf("Enter base: ");
		scanf("%f",&base);
		printf("Enter height: ");
		scanf("%f",&height);
		
		area = (base*height)/2.0;
		printf("Area of the Triangle: %.2f",area);
	}
	//Circle Implementation
	else if(shape == 'C'){
		printf("This is a Circle\n");
		printf("Enter radius: ");
		scanf("%f",&radius);
		
		area = (22.0/7)*radius*radius;
		printf("Area of the Circle: %.2f",area);
	}
	else{
		printf("invalid character");
	}

	return 0;
}


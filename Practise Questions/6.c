/*C Program to find the area and perimeter of the circle when the radius is given as input.*/
#include <stdio.h>
#define pi 3.14f
int main(){
	float r,a,p;
	printf("Enter radius of circle: ");
	scanf("%f", &r); a = pi*r*r;
	p = 2.0*pi*r;
	printf("Area of circle: %f\n", a);
	printf("Perimeter of circle: %f\n", p);
	return 0;
}
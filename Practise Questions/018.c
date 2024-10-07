/*Program to find the volume and surface area of a sphere*/
#include <stdio.h>
#define Pi 3.14159265f

int main(){
	float r,vol,surface;
	printf("Radius of sphere: ");
	scanf("%f", &r);
	vol = (4*Pi*r*r*r)/3;
	surface = (4*Pi*r*r);
	printf("Volume of sphere: %f\n", vol);
	printf("Surface area of sphere: %f\n", surface);
	return 0;
}
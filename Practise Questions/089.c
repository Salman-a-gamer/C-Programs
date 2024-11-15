/* C program finding area of a rectangle with no arguments no return type.*/
#include <stdio.h>
int l,b,a;
void area(){
	a = l*b;
}

void main(){
	printf("enter length of rectangle: ");
	scanf("%d",&l);
	printf("enter breadth of rectangle: ");
	scanf("%d",&b);
	area();
	printf("Area of Rectangle: %d",a);
}
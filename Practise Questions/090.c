/*C program on finding area of a rectangle with arguments no return type.*/
#include <stdio.h>
int a;
	void area(int x, int y){
		a = x*y;
	}

void main(){
	int l,b;
	printf("enter length of rectangle: ");
	scanf("%d",&l);
	printf("enter breadth of rectangle: ");
	scanf("%d",&b);
	area(l,b);
	printf("Area of Rectangle: %d",a);
}
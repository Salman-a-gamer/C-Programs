/*C program on finding area of a rectangle with arguments & return type*/
#include <stdio.h>
int area(int x, int y){
	return x*y;
}

void main(){
	int l,b;
	printf("enter length of rectangle: ");
	scanf("%d",&l);
	printf("enter breadth of rectangle: ");
	scanf("%d",&b);
	printf("Area of Rectangle: %d",area(l,b));
}
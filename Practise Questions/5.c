/*C Program to read the length and breadth of a rectangle as input and find its area and perimeter.*/
#include <stdio.h>
int main(){
	int l,b;
	printf("Enter the length & width of the rectangle: ");
	scanf("%d%d", &l,&b);
	float area, perimeter;
	area = l*b;
	perimeter = 2*(l+b);
	printf("The Perimeter and area of rectangle = %lf, %lf units\n", perimeter,area);
    return 0;
}
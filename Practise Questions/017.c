/*C Program to calculate the area of a triangle when three sides a,b,c are given.*/
#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,s,area;
	printf("Enter the values of a, b and c: ");
	scanf("%d%d%d", &a, &b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle: %d\n", area);
    return 0;
}
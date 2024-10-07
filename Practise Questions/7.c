/*C Program to display an integer value as left and right justified, a float value with required precision and a char with its equivalent ASCII value.*/
#include <stdio.h>
int main(){
	int a,b;
	float c,d;
	char e;
	printf("Enter two integers: ");
	scanf("%d%d", &a,&b);
	printf("Enter two float values: ");
	scanf("%f%f", &c,&d);
	printf("Enter a character: ");
	scanf(" %c", &e);
	printf("Integer with left justified: %d\n", a);
	printf("Integer with right justified: %3d\n", b);
	printf("Float value with precision: %f\n", c);
	printf("Float value with precision: %.2f\n", d);
	printf("ASCII value of character: %d\n",e);
    return 0;
}
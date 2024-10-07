/* C - Program to convert temperature from Celsius to Fahrenheit.*/
#include <stdio.h>
int main(){
	float c;
	printf("Enter temperature in celsius: ");
	scanf("%f", &c);
	printf("%.2f Celsius = %.2f Fahrenheit\n", c,c*9/5 + 32);
    return 0;
}
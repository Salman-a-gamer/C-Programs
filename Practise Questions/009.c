/*C program to read two values and do the arithmetic operations ( +, - , * , / , % )*/
#include <stdio.h>

int main(){
	int a,b;
	printf("Enter a value: ");
	scanf("%d", &a);
	printf("Enter b value: ");
	scanf("%d", &b);
	
	printf("Addition: %d\n", a+b);
	printf("Subtraction: %d\n", a-b);
	printf("Multiplication: %d\n", a*b);
	printf("Division: %d\n", a/b);
	printf("Modulus: %d\n", a%b);
    return 0;
}
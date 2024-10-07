/*C program to display the given integer in decimal, hexadecimal and octal formats.*/

#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	printf("Given integer value in Decimal form: %d\n", a);
	printf("Given integer value in hexadecimal form: %X\n", a);
	printf("Given integer value in Octal form: %o\n", a);
}
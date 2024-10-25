/*C program to convert a decimal number to its equivalent binary number*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, num, a[10];
	printf("Enter the number to convert: ");
	scanf("%d", &num);
	for(i=0; num>0; i++)
		{
		a[i] = num%2;
		num/=2;
	}
	printf("Binary of given number is: ");
	for(i=i-1; i>=0; i--)
		{
		printf("%d", a[i]);
		}
	printf("\n");
}

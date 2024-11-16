/* C program to find Average of two numbers using Nesting of functions*/
#include <stdio.h>
int add(int x,int y){
	return x+y;
}
float average(int x,int y){
	float sum = add(x,y);
	return sum/2;
}
void main(){
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	float avg = average(a,b);
	printf("The Average of %d and %d is: %.2f",a,b,avg);
}
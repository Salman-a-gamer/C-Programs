/*Swapping of two numbers using call by value.*/
#include <stdio.h>
int a,b;

void swap(int x, int y){
	a= a^b;
	b= a^b;
	a= a^b;
}

void main(){
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	printf("Values before swapping : a = %d b = %d\n",a,b);
	swap(a,b);
	printf("Values after swapping : x = %d y = %d\n",a,b);
}
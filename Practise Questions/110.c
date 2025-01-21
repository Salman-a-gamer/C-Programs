//  C program to swap 2 given numbers using pointers
#include <stdio.h>
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void main(){
	int a,b;
	printf("Enter the first number :\n");
	scanf("%d",&a);
	printf("Enter the second number :\n");
	scanf("%d",&b);
	printf("Two Number before swapping :\nFirst number:%d\nSecond number:%d\n",a,b);
	swap(&a,&b);
	printf("Two Number after swapping :\nFirst number:%d\nSecond number:%d\n",a,b);
}
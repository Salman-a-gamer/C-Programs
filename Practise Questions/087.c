/*Swapping of two numbers using call by reference.*/
#include <stdio.h>
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void main(){
	int a,b;
	printf("Enter the value of x and y\n");
	scanf("%d%d",&a,&b);
	printf("Values before Swapping\nx = %d\ny = %d\n",a,b);
	swap(&a,&b);
	printf("Values in the swap function : x = %d  y = %d\n",a,b);
	printf("Values after Swapping\nx = %d\ny = %d\n",a,b);
}
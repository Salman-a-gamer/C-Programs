/*C Program to swap given two numbers.*/
#include <stdio.h>
int main(){
	int x,y,temp;
	printf("Enter the values of x and y: ");
	scanf("%d%d", &x, &y);
	printf("Before swapping x = %d, y = %d\n", x,y);
	temp = y;
	y = x;
	x = temp;
	printf("After swapping x = %d, b = %d\n", x,y);
    return 0;
}
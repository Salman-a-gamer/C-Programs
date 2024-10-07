/*C Program to swap given two numbers.*/
#include <stdio.h>
int main(){
	int x,y;
	printf("Enter the values of x and y: ");
	scanf("%d%d", &x, &y);
	printf("Before swapping x = %d, y = %d\n", x,y);
	printf("After swapping x = %d, b = %d\n", y,x);
    return 0;
}
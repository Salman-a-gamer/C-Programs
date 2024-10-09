/*C Program to find the sum of 1 to n integers.*/
#include <stdio.h>
int main(){
	int n, result;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	result = (n*(n+1))/2;
	printf("Sum = %d\n", result);
    return 0;
}
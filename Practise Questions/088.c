/*C program to find the factorial of a number using Recursion.*/
#include <stdio.h>
int fact(int x){
	int res;
	if(x==1){
		return 1;
	}
	res = x * fact(x-1);
	return res;
}

void main(){
	int a,fact1;
	printf("Enter a positive integer: ");
	scanf("%d",&a);
	fact1 = fact(a);
	printf("Factorial of %d = %d\n",a,fact1);
}
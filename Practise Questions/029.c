/*program to find out the value of (a+b)²*/
#include <stdio.h>
#include <stdio.h>
int main(){
	int a,b;
	float result;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	result = pow(a+b,2);
	printf("Result: %f\n", result);
    return 0;
}
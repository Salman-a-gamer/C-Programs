// C program to perform arithmetic operations on 2 given numbers using pointers.
#include <stdio.h>
int main(){
	int a,b,i;
	printf("Enter number1:\n");
	scanf("%d",&a);
	printf("Enter number2:\n");
	scanf("%d",&b);
	if(b==0){
		printf("Arithmetic Exception as Second number is 0\n");
		return 0;
	}
	int *p1 = &a;
	int *p2 = &b;
	int div = *p1 / *p2;
	printf("sum= %d\nsubtraction= %d\nMultiplication= %d\nDivision= %f\nRemainder= %d\n",(*p1+*p2),(*p1-*p2), (*p1 * *p2),(float)div,(*p1 % *p2) );
}
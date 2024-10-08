/*C program to demonstrate the use of relational and all bitwise operators. ( & , | , ^ , ~ , << , >> )*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter a value: ");
	scanf("%d", &a);
	printf("Enter b value: ");
	scanf("%d", &b);
	printf("Value of a&b is: %d\n", a&b);
	printf("Value of a|b is: %d\n", a|b);
	printf("Value of a^b is: %d\n", a^b);
	printf("Value of ~a is: %d\n", ~a);
	printf("Value of a<<b is: %d\n", a<<b);
	printf("Value of a>>b is: %d\n", a>>b);
    return 0;
}
 /*C program on pre decrement and post decrement operators ( --i , i-- )*/

#include <stdio.h>
int main(){
	int a,b;
	printf("Enter a value: ");
	scanf("%d", &a);
	printf("Enter b value: ");
	scanf("%d", &b);
	printf("Value of a: %d\n", a);
	a--;
	printf("Pre decrement of a: %d\n", a);
	printf("Value of a after decrement: %d\n", a);
	printf("Value of b: %d\n", b);
	printf("Post decrement of b: %d\n", b);
	b--;
	printf("Value of b after decrement: %d\n", b);
    return 0;
}
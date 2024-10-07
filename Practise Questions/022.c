/*C program on logical OR operator ( || )*/
#include <stdio.h>
int main(){
	int a,b;
	printf("0-FALSE 1-TRUE\n");
	printf("Enter a value: ");
	scanf("%d", &a);
	printf("Enter b value: ");
	scanf("%d", &b);
	printf("OR operator result of a||b: %d\n", a||b);
    return 0;
}
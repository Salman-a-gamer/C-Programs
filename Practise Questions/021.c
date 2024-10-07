/*C program on logical AND operator ( && )*/
#include <stdio.h>
int main(){
	int a,b;
	printf("0-FALSE 1-TRUE\n");
	printf("Enter a value: ");
	scanf("%d", &a);
	printf("Enter b value: ");
	scanf("%d", &b);
	printf("AND operator result of a&&b: %d\n", a&&b);
    return 0;
}
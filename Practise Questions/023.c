/*C program on logical NOT operator ( ! )*/
#include <stdio.h>
int main(){
	int a;
	printf("0-FALSE 1-TRUE\n");
	printf("Enter a value: ");
	scanf("%d", &a);
	printf("NOT operator result is: %d\n", a!=1);
    return 0;
}
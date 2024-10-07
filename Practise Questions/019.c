/*C program on post increment and pre increment operators (i++ , ++i)*/

#include <stdio.h>
int main(){
	int a;
	printf("Enter a value: ");
	scanf("%d", &a);
	printf("Post increment: %d\n", a);
	a++;
	printf("Pre increment: %d\n", ++a);
    return 0;
}
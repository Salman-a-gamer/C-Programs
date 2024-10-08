/*C program to check whether a given number is EVEN or ODD.*/
#include <stdio.h>
int main(){
	int a;
	printf("Enter a number to check: ");
	scanf("%d", &a);
	if(a%2==0){
	printf("%d is even\n", a);
	} else{
	printf("%d is odd\n", a);
	}
    return 0;
}
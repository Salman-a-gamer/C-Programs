/*C program to print the Number entered by the user only if the number entered is Positive.*/
#include <stdio.h>
int main(){
	int a;
	printf("Enter a number to check: ");
	scanf("%d", &a);
	if(a>0){
		printf("Number is positive\n");
	} else{
		printf("Number is negative\n");
	}
    return 0;
}
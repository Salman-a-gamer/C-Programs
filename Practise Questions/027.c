/*program to find the given number is even or odd using a conditional operator.*/
#include <stdio.h>
int main(){
	int a;
	printf("Enter an integer: ");
	scanf("%d", &a);
		if(a%2==0){
		printf("The given number is even number\n");
		} else{
			printf("The given number is odd number\n");
		}
    return 0;
}
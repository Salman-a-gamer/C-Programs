/*program to find the biggest of three numbers using a conditional operator.*/
#include <stdio.h>
int main(){
	int a,b,c,x;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a,&b,&c);
 	x = (a>b && a>c) ? a : ( (b>a && b>c) ? b : c );
	printf("The biggest number is: %d\n", x);
	return 0;
}
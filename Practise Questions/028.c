/*program to find the biggest of three numbers using a conditional operator.*/
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b && a>c){
		printf("The biggest number is: %d\n", a);
	} else if(b>a && b>c){
		printf("The biggest number is: %d\n", b);
	} else {
		printf("The biggest number is: %d\n", c);
	}
    return 0;
}
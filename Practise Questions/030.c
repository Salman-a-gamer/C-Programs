/*C program to demonstrate conditional operator. ( ? : )*/
#include <stdio.h>
int main(){
	int a,b,ans;
	printf("Enter two numbers: ");
	scanf("%d%d", &a,&b);
	printf("a = %d, b = %d\n",a,b);
	ans = (a>b) ? a : b ;
	printf("Largest number: %d\n", ans);
    return 0;
}
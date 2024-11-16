/*C program to implement user defined power function.*/
#include <stdio.h>
int power(int x, int y){
	int i,res;
	res = x;
	for(i=1;i<y;i++){
		res = res*x;
	}
	return res;
}
void main(){
	int a,n;
	printf("Enter any number : ");
	scanf("%d",&a);
	printf("Enter power of number : ");
	scanf("%d",&n);
	printf("%d's power %d = %d",a,n,power(a,n));
}
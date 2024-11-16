/*C program to show More than one function calls in the calling function*/
#include <stdio.h>
int sum(int x,int y){
	return x+y;
}
int sub(int x,int y){
	return x-y;
}

void main(){
	int a,b;
	printf("A value:");
	scanf("%d",&a);
	printf("B value:");
	scanf("%d",&b);
	printf("Given number's Addition:%d & Subtraction:%d.",sum(a,b),sub(a,b));
}
// C program to find greatest of 2 numbers using pointers.
#include <stdio.h>
void main(){
	int a,b;
	printf("Enter two numbers : \n");
	scanf("%d%d",&a,&b);
	int *p1 = &a;
	int *p2 = &b;
	if(*p1>*p2){
		printf("%d is greater than %d",*p1,*p2);
	} else if(*p2>*p1){
		printf("%d is greater than %d",*p2,*p1);
	} else{
		printf("Both the numbers are same");
	}
}
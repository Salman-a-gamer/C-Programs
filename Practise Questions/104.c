// C program to demonstrate the usage of pointer variables with other pointers
#include <stdio.h>
void main(){
	int a=5;
	int *p1 = &a;
	int **p2 = &p1;
	printf("%d",**p2);
}
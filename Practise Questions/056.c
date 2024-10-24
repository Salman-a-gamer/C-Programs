#include <stdio.h>
int main(){
	int m,n,i;
	printf("Enter first integer: ");
	scanf("%d", &m);
	printf("Enter second positive integer greater than first one: ");
	scanf("%d", &n);

	printf("Values are:");
	i = m-1;
	
	do{
	i++;
	printf(" %d", i);
	}
	while(i<n); 
	
	printf(" \n");
}

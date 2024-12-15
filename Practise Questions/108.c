/*Write a C program that demonstrates the usage of a pointer to multiple strings. The program should declare a pointer to an array of character pointers and display a list of names using the pointer.*/
#include <stdio.h>
void main(){
	int i,n;
	scanf("%d",&n);
	char str[n][20];
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	printf("List of names:\n");
	for(i=0;i<n;i++){
		printf("%s\n",str[i]);
	}
}
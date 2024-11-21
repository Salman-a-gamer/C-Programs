#include <stdio.h>
#include <ctype.h>
void main(){
	char S1[10], S2[10];
	printf("Enter string for S2:");
	scanf("%s",&S2);
	strcpy(S1,S2);
	printf("The String in S1: %s\n",S1);
	return;
}
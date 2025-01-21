// C program to read an array of strings and convert all the Strings in the array to lower case.
#include <stdio.h>
#include <string.h>
void main(){
	int m,n,i,j;
	char str[m][50];
	printf("Enter no.of elements in the array: ");
	scanf("%d",&m);
	printf("Enter elements: ");
	for(i=0;i<m;i++){
		scanf("%s",&str[i]);
	}
	for(i=0;i<m;i++){
		int len = strlen(str[i]);
		for(j=0;j<len;j++){
			str[i][j] = tolower(str[i][j]);
		}
	}
	printf("Converted Strings of Array\n");
	for(i=0;i<m;i++){
		printf("%s\n",str[i]);
	}
}
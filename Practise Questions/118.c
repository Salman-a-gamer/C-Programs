// C program to read a string and convert all the characters to lower case
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
	char str[100];
	int i,len;
	printf("Enter the string: ");
	fgets(str,sizeof(str),stdin);
	len = strlen(str);
	for(i=0;i<len;i++){
		str[i] = tolower(str[i]);
	}
	printf("Lower Case String is: %s\n",str);
}
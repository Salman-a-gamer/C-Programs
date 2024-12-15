//C program to print a string from lower case to upper case
#include <stdio.h>
#include <string.h>
void main(){
	int i,len;
	char str[20];
	printf("Enter string : ");
	fgets(str,sizeof(str),stdin);
	len = strlen(str);
	for(i=0;i<len;i++){
		str[i] = toupper(str[i]);
	}
	printf("Converted string : %s", str);
}
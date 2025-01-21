// C program to read a string and display the string without vowels and also display number of vowels occurred in a given string
#include <string.h>
#include <stdio.h>
#include <ctype.h>
void main(){
	int i,count=0;
	char str[100];
	printf("Enter the string: ");
	fgets(str,sizeof(str),stdin);
	printf("String after removing vowels : ");
	int len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i] == 'a' || str[i] == 'e' ||str[i]=='i' || str[i] == 'o' || str[i]=='u' || str[i] =='A' || str[i] =='E' ||str[i] =='I' || str[i]=='O' || str[i] == 'U'){
			count++;
		} else{
			putchar(str[i]);
		}
	}
	printf("No.of vowels in given string : %d\n",count);
}
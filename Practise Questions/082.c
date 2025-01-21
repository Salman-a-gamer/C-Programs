//c program to implement string operations(lowercase and uppercase) without using predefined string functions.

#include<stdio.h>
#include<string.h>
void main(){
	char a[20],b[20],c[20],d[20];
	int l,m;
	printf("Enter string1: ");
	gets(a);
	printf("Enter string2: ");
	gets(b);
	for(m=0;d[m]!='\0';m++){
			if(d[m]>='a'&&d[m]<='z'){
				d[m]=d[m]-32;
			}
		}
		printf("After changing string 1 from lower to upper case: %s\n",d);
	for(m=0;d[m]!='\0';m++){
		if(d[m]>='A'&& d[m]<='Z'){
			d[m]=d[m]+32;
		}
	}
	printf("After changing string 1 from upper to lower case: %s\n",d);
}
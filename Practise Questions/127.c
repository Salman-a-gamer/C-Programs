//  C program to read and display file content.

#include <stdio.h>
void main(){
	char fname[20];
	char buff[100];
	printf("Enter File Name : ");
	gets(fname);
	FILE *fp = fopen(fname,"r");
	printf("Contents of File : \n");
	while((fgets(buff, 100, fp)) != NULL){
		printf("%s",buff);
	}
	fclose(fp);
}
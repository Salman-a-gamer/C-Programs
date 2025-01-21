// C program to store strings in a file
#include <stdio.h>
void main(){
	char fname[100], str[100], buff[100];
	printf("Enter a filename :");
	scanf("%s",&fname);
	FILE *fp = fopen(fname, "w");
	printf("Enter the string to write :");
	scanf("%s",&str);
	fprintf(fp, str);
	fclose(fp);
	fp = fopen(fname,"r");

	printf("File content :");

	while(fgets(buff,100,fp) != NULL){
		printf("%s",buff);
	}

	fclose(fp);
}
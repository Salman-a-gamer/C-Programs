#include <stdio.h>
#include <string.h>
void main(){
	int n;
	char s1[20], s2[20],s3[20];
	printf("Enter string 1 :");
	scanf("%s",&s1);
	printf("Enter string 2 :");
	scanf("%s",&s2);
	printf("Length of string 1 is %ld\n",strlen(s1));
	printf("Length  of string 2 is %ld\n",strlen(s2));
	strcpy(s3,s2);
	printf("After copying string 2 into another string:%s\n",s3);
	printf("After string comparing:");
	n = strcmp(s1,s2);
	if(n !=0){
		printf("Strings are not equal\n");
	} else{
		printf("Strings are equal\n");
	}
	strcat(s1,s2);
	printf("After string concatenate:%s\n",s1);
}
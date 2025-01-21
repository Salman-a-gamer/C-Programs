// C program for table of strings
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
/* C program to print a Multiplication Table*/
#include <stdio.h>
void main(){
	int num,i,j,n;
	printf("Enter Number for Multiplication Table :");
	scanf("%d",&n);
	printf("MULTIPLICATION TABLE\n");
	printf("     ");
	for(i=1;i<=n;i++){
	printf("%4d",i);
	}
	printf("\n------------------------------------------------");
	printf("\n");
	for(i=1;i<=n;i++){
	printf("%2d | ",i);
	
	for(j=1; j<=n; j++){
		printf("%4d",i*j);
	}
		printf("\n");
	}
}
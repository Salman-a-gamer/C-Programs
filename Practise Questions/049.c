/*C program to print the Fibonacci sequence upto a given number n.*/
#include <stdio.h>
int main(){
	int n3 =0;
	int n, n1=0,n2=1;
	printf("Enter a positive number: ");
	scanf("%d", &n);
	printf("Fibonacci Series: ");
	if(n==1){
		printf("0\n");
	} else if(n ==2){
		printf("0,1\n");
	}else if(n>2){
		printf("0,1,");
		while(n3<n){
			n3 = n1 + n2;
			if(n3<=n){
			printf("%d,",n3);
			} else{
				;
			}
			n1 = n2;
			n2 = n3;
		}
		printf("\n");
	}
	return 0;
}
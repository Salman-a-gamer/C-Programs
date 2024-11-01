/* C program to print the pascal triangle of numbers*/
#include <stdio.h>
int main(){
	int n,i,j,value;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	for(i=0; i <n; i++){
// Space
	for(j=0;j<=n-1-i;j++){
		printf(" ");
	}
		value =1;
// print value using formula C(n,k) = n! / k!(n-k)! 
	for(j=0;j<=i; j++){
	printf(" %3d", value);
		value = value * (i - j) / (j+1);
	}
	
	printf("\n");
	}
	return 0;
}
/*C program to print Upper Triangular Matrix for a given matrix.*/
#include <stdio.h>
int main(){
	int m,n,i,j;
	printf("Enter Number of rows and columns  :");
	scanf("%d%d", &m,&n);
	int a[m][n];
	printf("Enter the Matrix Elements:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Upper Triagular Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(j>=i){
				printf("%d ", a[i][j]);
			} else{
			printf("0 ");
			}
		}
		printf("\n");
	}
}
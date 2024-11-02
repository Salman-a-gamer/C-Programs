/* C program to find a trace of a matrix.*/
#include <stdio.h>
int main(){
	int m,n,i,j,trace=0;
	printf("Enter number of rows and columns:");
	scanf("%d%d", &m,&n);
	if(m!=n){
		printf("Not a square matrix\n");
		return 0;
	}
	printf("Enter Elements in Matrix:-\n");
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0,j=0;i<m,j<n;i++,j++){
		trace+=a[i][j];
	}


	printf("Trace of the matrix = %d\n", trace);
}
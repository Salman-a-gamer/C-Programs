//Multiplication of two Matrices

#include<stdio.h>
int main(){
	int m,n,p,q,i,j,k;
	printf("Enter the row & column sizes of matrix-1 : ");
	scanf("%d%d", &m,&n);
	int a[m][n];
	printf("Enter the row & column sizes of matrix-2 : ");
	scanf("%d%d", &p,&q);
	int b[p][q];
	printf("Enter matrix-1 %d elements : ", m*n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter matrix-2 %d elements : ", p*q);
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("The given matrix-1 is\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ", a[i][j]) ;
		}
		printf("\n");
	}
	printf("The given matrix-2 is\n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	if(n!=p){
		printf("Multiplication is not possible\n");
		return 0;
	} 
		int c[m][q];
		for(i=0;i<m;i++){
			for(j=0;j<q;j++){
				c[i][j]= 0;
				for(k=0;k<n;k++){
				c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		printf("Multiplication of two matrices is\n");
		for(i=0;i<m;i++){
			for(j=0;j<q;j++){
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	
}
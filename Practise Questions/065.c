/*Program to find the addition of two matrices.*/
#include<stdio.h>
void main() {
	int i, j, m, n, p, q;
	int a[5][5], b[5][5], c[5][5];
	printf("Enter the row & column sizes of matrix-1 : ");
	scanf("%d %d", &m, &n);
	printf("Enter matrix-1 %d elements : ", m*n);
	for (i=0;i<m;i++ ) { 
		for (j=0;j<n;j++ ) { 
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the row & column sizes of matrix-2 : ");
	scanf("%d %d", &p, &q);
	printf("Enter matrix-2 %d elements : ", p*q);
	for (i=0;i<p;i++ ) { 
		for (j=0;j<q;j++ ) { 
			scanf("%d", &b[i][j]);
		}
	}
	printf("The given matrix-1 is\n");
	// Write the code to display Matrix-1 elements
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("The given matrix-2 is\n");
	// Write the code to display Matrix-2 elements
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	if ( m== p && n ==q) { 
		for (i=0;i<m;i++ ) { 
			for ( j=0;j<n;j++) { 
				c[i][j] = a[i][j] + b[i][j]; 
			}
		}
		printf("Addition of two matrices is\n");
		// Write the code to display resultant matrix elements
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	} else {
		printf("Addition is not possible\n");
	}
}
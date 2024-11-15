/*functions for transpose of a given matrix */

void read1(int x[5][5], int m, int n) {
	int i,j;
	printf("Enter %d elements : ",m*n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&x[i][j]);
		}
	}
}

void display(int y[5][5], int m, int n) {
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}
}

void transposeMatrix(int a[5][5], int b[5][5], int m, int n) {
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[i][j] = a[j][i];
		}
	}
}
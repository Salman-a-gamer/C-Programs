/* program using function for addition of two matrices*/
#include <stdio.h>

void readMatrix(int x,int y, int l[x][y]){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d",&l[i][j]);
		}
	}
}

void addMatrix(int x, int y, int l[x][y], int m[x][y], int n[x][y]){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			n[i][j] = l[i][j] + m[i][j];
		}
	}
}

void printMatrix(int x,int y, int l[x][y]){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%d\t",l[i][j]);
		}
		printf("\n");
	}
}

void main(){
	int row,col;
	printf("Enter the number of rows and columns of matrix\n");
	scanf("%d%d",&row,&col);
	int a[row][col], b[row][col], c[row][col];
	printf("Enter the elements of first matrix\n");
	readMatrix(row,col,a);
	printf("Enter the elements of second matrix\n");
	readMatrix(row,col,b);
	printf("Sum of entered matrices:-\n");
	addMatrix(row,col,a,b,c);
	printMatrix(row,col,c);
}
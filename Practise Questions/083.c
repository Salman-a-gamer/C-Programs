/* C program using function for reading and printing the MATRIX*/
#include <stdio.h>
void readMatrix(int x,int y,int a[x][y]){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("Enter a[%d][%d] value :: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	}
void printMatrix(int x,int y, int a[x][y]){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}

void main(){
	int row, col;
	printf("Enter no. of rows :: ");
	scanf("%d",&row);
	printf("Enter no. of columns :: ");
	scanf("%d",&col);
	printf("Enter values to the matrix :: \n");
	int a[row][col];
	readMatrix(row,col,a);
	printf("The given matrix is \n");
	printMatrix(row,col,a);
	}
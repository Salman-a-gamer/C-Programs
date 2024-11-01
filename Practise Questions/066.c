/*program to find the transpose of a given matrix.*/
#include <stdio.h>
void main(){
	int row, clm, i,j;
	printf("Enter the order of matrix : ");
	scanf("%d%d", &row,&clm);
	int num = row*clm;
	printf("Enter %d elements : ", num);
	int a[row][clm];
	for(i=0;i<row;i++){
		for(j=0;j<clm;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("The given matrix is\n");
	for(i=0;i<row;i++){
		for(j=0;j<clm;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of the given matrix is\n");
	for(i=0;i<clm;i++){
		for(j=0;j<row;j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
}
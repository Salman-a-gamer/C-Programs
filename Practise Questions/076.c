/*C program to find whether a given matrix is a symmetric matrix or not.*/
#include <stdio.h>
int main(){
	int m,n,i,j,flag=1;
	printf("Enter the order of matrix : ");
	scanf("%d%d", &m,&n);
	int a[m][n];
	printf("Enter %d elements : ",m*n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("The given matrix is\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of the given matrix is\n");
	int b[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[j][i]);
			b[i][j] = a[j][i];
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j] != b[i][j]){
				flag = 0;
				break;
			}
			if(flag==0){
				break;
			}
		}
	}
		if(flag==1){
		printf("The given matrix is symmetric matrix\n");
		} else if(flag==0){
			printf("The given matrix is not symmetric matrix\n");
		}
	
}
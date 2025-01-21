// C program to take input from user and print the output of 2-D array
#include <stdio.h>
void main(){
	int i,m,n,j;
	printf("Enter no.of elements in first and second dimension: ");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter element %d %d : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int *ip = &arr;
	printf("The array values are as follow:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("*(ip+ %d*%d+ %d)= %3d \n",i,n,j, *(ip+ i*n+j) );
		}
	}

}
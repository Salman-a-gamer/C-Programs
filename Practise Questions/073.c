/*program to check whether the given matrix is an identity matrix or not using functions.*/
#include <stdio.h>
void read1(int [5][5], int n);
void display(int [5][5], int n);
int checkIdentityMatrix(int [5][5], int n);
void main(){
	int arr[5][5], n, flag,i,j;
	printf("Enter the size of square matrix : ");
	scanf("%d", &n);
	printf("Enter %d elements : ", n * n);
	read1(arr, n);
	printf("The given matrix is\n");
	display(arr, n);
	flag = checkIdentityMatrix(arr, n);
	if (flag == 1)
		printf("It is an identity matrix\n");
	else
		printf("It is not an identity matrix\n");
}
void read1(int arr[5][5], int n) {
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}
void display(int arr[5][5], int n) {
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
int checkIdentityMatrix(int arr[5][5], int n) {
	int i,j,flag;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){

			if(i==j){
				if(arr[i][j] == 1){
					flag=1;
				} else{
				flag =0;
				return flag;
				}
			} else{
				if(arr[i][j] == 0){
					flag=1;
				} else{
					flag=0;
					return flag;
				}
			}
		}
	}
	return flag;
}
// C program to take the inputs from the user and print the elements of 1-D array.
#include <stdio.h>
void main(){
	int n,i;
	printf("Enter no.of lements: ");
	scanf("%d",&n);
	int arr[n];
	int *ip = &arr;
	for(i=0;i<n;i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Elements of the array are : \n");
	for(i=0;i<n;i++){
		printf("*(ip+%d): %d \n",i,*(ip+i) );
	}
}
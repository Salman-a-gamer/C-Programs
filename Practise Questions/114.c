// C program to find average of the given array using pointers.
#include <stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	if(n==0){
		printf("Array is empty");
		return -1;
	}
	printf("Enter %d elements in the array:\n",n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int *p = &arr;
	printf("Elements in the array are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",*(p + i));
		sum += *(p +i);
	}
	int avg = sum/n;
	printf("\nAverage of the elements in the array = %d\n",avg);
}
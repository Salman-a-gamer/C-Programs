// C program to find greatest of given numbers in the array using pointers.
#include <stdio.h>
void main(){
	int n,i,large;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	if(n==0){
		printf("Array is empty");
		return 0;
	}
	printf("Enter %d elements in the array:\n",n);
	int arr[n];
	int *p = &arr;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Elements in the array are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	large = *p;
	for(i=0;i<n;i++){
		if(*(p +i) > large ){
			large = *(p +i);
		}
	}
	printf("Greatest element in the array is: %d",large);
}
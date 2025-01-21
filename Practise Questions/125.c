// c program to find largest of n numbers using array of pointers
#include <stdio.h>
void main(){
	int n,i,large;
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	if(n==0){
		printf("Array is empty");
		return 0;
	}
	printf("Enter %d integers\n",n);
	int arr[n];
	int *p = &arr;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	large = *p;
	for(i=0;i<n;i++){
		if(*(p +i) > large ){
			large = *(p +i);
		}
	}
	printf("Maximum value of the element in the given array is %d.\n",large);
}
/*Write a program to print the given integer elements of an array (with max size 10) in reverse order.*/
#include <stdio.h>
void main() {
	int arr[10], i, n;
	printf("Enter size of the array : ");
	scanf("%d", &n );
	printf("Enter array elements : ");
	// Fill the missing code
	for(i=0;i<n;i++){
	scanf("%d", &arr[i]);
	}	
	printf("Array elements in reverse order : ");
	// Fill the missing code
	for(i=i-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	
	
}	
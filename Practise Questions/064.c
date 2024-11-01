/*C program to find minimum value and maximum value from given elements in an array.*/
#include <stdio.h>
int main(){
	int size, i,min,max;
	printf("Enter array size: ");
	scanf("%d", &size);
	int a[size];
	printf("Enter array elements: ");
	for(i=0;i<size;i++){
	scanf("%d", &a[i]);
	}
	min= a[0];
	max = a[0];
	
	for(i=0;i<size;i++){
	if(a[i]>max){
		max = a[i];
	}
	if(a[i]<min){
		min = a[i];
	}
	}

	printf("Minimum element: %d\nMaximum element: %d\n", min,max);
	return 0;
}

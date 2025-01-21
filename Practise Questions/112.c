// C program to find average of 4 numbers using pointers.
#include <stdio.h>
void main(){
	int n,i,sum=0,avg=0;
	printf("Enter the 4 numbers :\n");
	int arr[4];
	for(i=0;i<4;i++){
		scanf("%d",&arr[i]);
	}
	int *p = arr;
	for(i=0;i<4;i++){
		sum+=*(p+i);
	}
	avg = sum/4;
	printf("Average of given numbers = %.2f",(float)avg);
}
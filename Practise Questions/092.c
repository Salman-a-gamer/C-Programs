/*C program to find Largest of n numbers using functions with arrays.*/
#include <stdio.h>
int a[100],n;

int large(int a[n]){
	int i,large;
	large = a[0];
	for(i=1;i<n;i++){
		if(a[i]>large){
			large = a[i];
		}
	}
	return large;
}

void main(){
	int i;
	printf("Enter Array Size:");
	scanf("%d",&n);
	printf("Enter Array Elements:");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}

	printf("Largest in given array is %d.", large(a));
}
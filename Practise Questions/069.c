/*Write a program to search a key element with in the given array of elements using linear search process.*/
#include<stdio.h>
void main() {
	int a[20], i, n, key, flag = 0, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("Enter element for a[%d] : ", i);
		scanf("%d",&a[i]);
	}
	
	
	printf("Enter key element : ");
	scanf("%d", &key);
	
	for(i=0;i<n;i++){
		if(a[i]==key){
			flag=1;
			pos = i;
			break;
		}
	}
	
	if (flag) { 
		printf("The key element %d is found at the position %d\n",key ,pos ); //Complete the statement
	} else {
		printf("The key element %d is not found in the array\n",key ); //Complete the statement
	}
}
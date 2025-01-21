//  c program to access 5 elements using array of pointers
#include <stdio.h>
void main(){
	int val[5],i;
	int *ap[5];
	for(i=0;i<5;i++){
		ap[i] = &val[i];
	}

	printf("Enter elements: ");
	for(i=0;i<5;i++){
		scanf("%d",&val[i]);
	}
	printf("The entered elements are: \n");
	for(i=0;i<5;i++){
		printf("%d\n", *ap[i]);
	}

}
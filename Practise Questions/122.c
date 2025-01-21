// C program to use three integers, which are stored in an array of pointers.
#include <stdio.h>
void main(){
	int a,b,c,i;
	int *ap[3];
	ap[0] = &a;
	ap[1] = &b;
	ap[2] = &c;
	printf("Enter array elements: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	for(i=0;i<3;i++){
		printf("Value of var[%d] = %d\n",i,*ap[i]);
	}
}
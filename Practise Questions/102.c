// C Program to Demonstrate Unions
#include <stdio.h>
union uni{
	int a;
	int b;
};

void main(){
	union uni myuni;
	printf("Enter a value for x : ");
	scanf("%d",&myuni.a);
	printf("After making x = %d :\n",myuni.a);
	printf("x = %d y= %d\n",myuni.a, myuni.b);
	printf("Enter a value for y : ");
	scanf("%d",&myuni.b);
	printf("After making y = %d :\n",myuni.b);
	printf("x = %d y = %d\n",myuni.a,myuni.b);
}
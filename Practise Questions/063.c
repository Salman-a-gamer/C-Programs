/*C program to read n integer values into an array and display them horizontally & vertically.*/
#include <stdio.h>
int main(){
	int index, i;
	scanf("%d", &index);
	int a[index];
	for(i=0;i<index;i++){
	scanf("%d", &a[i]);
	}
	printf("Array in Horizontal manner: ");
	for(i=0;i<index;i++){
	printf("%d ", a[i]);
	}
	printf("\n");
	printf("Array in Vertical manner: \n");
	for(i=0;i<index; i++){
	printf("%d\n",a[i]);
	}
}
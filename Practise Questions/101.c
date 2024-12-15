/* C Program to Demonstrate Structures.*/
#include <stdio.h>
struct xy {
	int x;
	int y;
};
void main(){
	struct xy mystruct;
	printf("Enter a value for x : ");
	scanf("%d",&mystruct.x);
	printf("Enter a value for y : ");
	scanf("%d",&mystruct.y);
	printf("x= %d , y = %d ",mystruct.x,mystruct.y);
}
/*C program which takes two integer values as input and displays the largest number.*/
#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	if(a>b){
		printf("largest = %d\n", a);
	} else{
		printf("largest = %d\n", b);
	}
    return 0;
}
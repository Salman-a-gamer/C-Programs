/*C program to find the Biggest of 3 numbers.*/
#include <stdio.h>
int main(){
	int a,b,c,big;
	printf("Number 1: ");
	scanf("%d", &a);
	printf("Number 2: ");
	scanf("%d", &b);
	printf("Number 3: ");
	scanf("%d", &c);
	if(a>b && a>c){
		big = a;
	} else if(b>a && b>c){
		big = b;
	} else {
		big =c;
	}
	printf("%d is greater among three\n", big);
    return 0;
}
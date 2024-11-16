/*C program to implement multiple return statements in a single function.*/
#include <stdio.h>
int res(int x, int y,char ch){
	if(ch == 'Q'){
		int res=x/y;
		return res;
	}
	if(ch =='R'){
		int res = x%y;
		return res;
	}
}

void main(){
	int D,d,result;
	printf("Dividend:");
	scanf("%d",&D);
	printf("Divisor:");
	scanf("%d",&d);
	result = res(D,d,'Q');
	printf("Quotient is: %d\n",result);
	result = res(D,d,'R');
	printf("Remainder is: %d\n",result);
}
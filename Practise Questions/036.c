/*C program to calculate the value of f(x) if x has different ranges of values as below.
f(x) = x2 + 2 ,if 0<=x<=10
f(x) = x2 + 2x ,if 11<=x<=20
f(x) = x3 + 2x2 ,if 21<=x<=30
f(x) = 0 , if x > 30*/
#include <stdio.h>
int main(){
	int x, ans;
	printf("Enter x Value:");
	scanf("%d", &x);
	if(x<=10 && x>=0){
		ans =x*x +2;
	} else if(x<=20 && x>=11){
		ans = x*x + 2*x;
	} else if(x<=30 && x>=21){
		ans = x*x*x + 2*x*x;
	} else {
		ans = 0;
	}
	printf("Value of F(x)= %d", ans);
    return 0;
}
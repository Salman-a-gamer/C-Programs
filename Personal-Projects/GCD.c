#include <stdio.h>
int gcd(int x,int y){
	int big,small,temp;
	if(x>y){
		small = y;
		big=x;
	} else{
		big=y;
		small = x;
	}
	while(small != 0){
		temp = big;
		big = small;
		small = temp % small;
	}
	return big;
}

void main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
}
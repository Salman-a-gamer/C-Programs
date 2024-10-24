#include <stdio.h>
void main(){
	float num, sum=0, avg=0, denominator;
	calculate:
	scanf("%f",&num);
	if(num<0){
		goto negative;
	}
	sum+=num;
	denominator++;
	goto calculate;
	negative:
	if(denominator>0){
		avg= sum/denominator;
		printf("Sum: %.2f\nAverage: %.2f\n", sum, avg);
	}
	return;
}

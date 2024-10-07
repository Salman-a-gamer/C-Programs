/*C Program to calculate simple interest.*/
#include <stdio.h>
int main(){
	float p,t,r,SI;
	printf("Enter principal,rate and time: ");
	scanf("%f%f%f",&p,&r,&t);
	SI = (p * t * r)/100;
	printf("Simple Interest = %f\n", SI);
    return 0;
}
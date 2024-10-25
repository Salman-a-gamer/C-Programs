/*C program to find the largest number among a series of numbers.*/
#include<stdio.h>
void main(){
	double num, large=0;
	printf("Enter a series of numbers (enter 0 to exit):\n");
	while(1)
	{
	scanf("%lf", &num);
	if(num==0){
	break;
	}
	if(num>large)
	{
		large = num;
	}
	}

	printf("The largest number is %.2lf\n", large);
}

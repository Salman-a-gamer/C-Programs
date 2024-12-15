/*C program to calculate the sin(x) using sine service expansion upto required number of terms and print the value of */
#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main(){
	double x, sin, temp, term ;
	int i,n;
	printf("Enter x value: ");
	scanf("%lf", &x);
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	temp = x;
	x = x * pi / 180.0;
	term = x;
	sin = x;
	for(i=1; i<=n; i++){
	term = ( term*(-1)*x*x ) / (2* i * (2*i +1));
		sin += term;
	}

	printf("sin(%lf degrees) = %lf\n", temp, sin);
	return 0;
}
/* C program to print the sum of Cos series.*/
#include <stdio.h>
#include <math.h>
#define pi 3.1415
void main()
{
	long double x, cos = 1.0, term = 1.0;
	int n, i;
	scanf("%Lf", &x);
	scanf("%d", &n);
	x = x * pi / 180.0;

	for(i=1; i<=n; i++){
	term = ( term* x *x * (-1) ) / ( 2*i*(2*i -1)  );
	cos+= term;
	}

	printf("%Lf\n", cos);
}
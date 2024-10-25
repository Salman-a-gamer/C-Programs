/*Program to find the sum of geometric series
S = a+ar+ar2+ar3+..... +arn-1*/
#include <stdio.h>
#include <math.h>
void main()
{
	float a,r,gm=0;
	int n,i;
	printf("Enter the first term a: ");
	scanf("%f", &a);
	printf("Enter the common ratio r: ");
	scanf("%f", &r);
	printf("Enter no.of terms: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
	gm = gm + a* pow(r,i);
	}
	printf("Sum of the geometric series: %.2f\n", gm);
	return;
}

#include <stdio.h>
int main(){
	int n;
	int sum=0;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++ )
	{
	sum = sum+i;
	}
	printf("Sum of the numbers = %d\n", sum);
	
	return 0;
}

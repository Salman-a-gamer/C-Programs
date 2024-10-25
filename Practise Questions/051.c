#include <stdio.h>
int main(){
	long long digits =0, num;
	scanf("%lld", &num);
	while(num!=0)
		{
			num=num/10;
			digits++;
		}
		printf("Number of digits: %lld\n", digits);
	return 0;
}

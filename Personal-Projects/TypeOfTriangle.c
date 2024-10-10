#include <stdio.h>
int main(){
	int a,b,c,s;
	printf("Enter 3 sides of triangle\n");
	scanf("%d%d%d", &a,&b,&c);
	if(a<=0 || b<=0 || c<=0 || a>=b+c || b>=a+c || c>= a+b){
		printf("Invalid triangle\n");
	} else if(a!=b && b!=c && a!=c){
		printf("This a scalene triangle");
	} else if ((a==b && b!=c ) || (a==c && a!=b) || (b==c && b!=a))
	{
		printf("Isoceles triangle\n");
	} else if(a==b && b==c){
		printf("Equilateral triangle\n" );
	}
    return 0;
}
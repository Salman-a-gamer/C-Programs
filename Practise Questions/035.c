/*C program to find the nature of the roots and roots of a Quadratic equation (ax2+bx+c=0). */
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,r1,r2,d;
	printf("Enter coefficients a: ");
	scanf("%f", &a);
	printf("Enter coefficients b: ");
	scanf("%f", &b);
	printf("Enter coefficients c: ");
	scanf("%f", &c);
	d =(b*b)-(4*a*c);
	
	if(d==0){
		r1 = (-b)/(2*a);
		r2 = r1;
		printf("root1 = %.2f and root2 = %.2f",r1,r2);
	} else if(d>0){
		r1 = (-b + sqrt(d))/(2*a);
		r2 = (-b-sqrt(d))/(2*a);
		printf("root1 = %.2f and root2 = %.2f", r1,r2);
	} else{
		r1 = (-b)/(2*a);
		r2 = (sqrt(-d))/(2*a);
		printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", r1,r2,r1,r2);
	}

    return 0;
}
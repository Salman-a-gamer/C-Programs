/* program to find the value of s, the distance traveled by an object s=u*t+0.5*a*t². Where u is the initial velocity, t is the time and a is the acceleration.*/
#include <stdio.h>
int main(){
	float v,a,d,t;
	printf("Enter value of initial velocity: ");
	scanf("%f", &v);
	printf("Enter the time: ");
	scanf("%f", &t);
	printf("Enter value of acceleration: ");
	scanf("%f", &a);
	d = (v*t)+(0.5*a*t*t);
	printf("The distance travelled by the object is: %f\n", d);
    return 0;
}
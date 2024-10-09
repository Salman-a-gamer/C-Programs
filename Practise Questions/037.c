/*Program using switch and if statements to compute the Net Amount to be paid by the customer to the cloth show room based on Purchase Amount and Discount.*/
#include <stdio.h>
int main(){
	float a,mc, handloom;
	printf("Enter Value:");
	scanf("%f", &a);

	if(a>=0 && a<= 100){
		mc = a;
		handloom = (a*19)/20;
	} else if(a>=101 && a<=200){
		mc = (a*19)/20;
		handloom = (a*92.5)/100;
	} else if(a>=201 && a<=300){
		mc = (a*92.5)/100;
		handloom = (a*9)/10;
	} else {
		mc = (a*9)/10;
		handloom = (a*85)/100;
	}

	printf("Mill Cloth Value= %.2f\n", mc);
	printf("Handloom Items Value= %.2f\n", handloom);
    return 0;
}
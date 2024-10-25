/* C program to add numbers until the user enter zero using the do-while loop*/
#include <stdio.h>
int main(){
	float num,sum=0; 
	printf("Enter zero if u want to exit\n");
	do{
	printf("Enter number: ");
	scanf("%f", &num);
	if(num==0)
	{
		break;
	}
	sum+= num;
	} while(1);

	printf("Sum of the numbers entered = %.2f\n", sum);
}

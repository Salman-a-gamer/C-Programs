/*program for demonstrating reading different values using scanf() and display them*/
#include <stdio.h>
int main(){
	printf("Enter a character: ");
	char c;
	scanf("%c", &c);
	
	printf("Enter the integer: ");
	int a;
	scanf("%d", &a);
	
	printf("Enter the float value: ");
	float f;
	scanf("%f",&f);
	
	printf("Character: %c\n", c);
	printf("Integer value: %d\n", a);
	printf("Float value: %f\n",f);
	return 0;
}
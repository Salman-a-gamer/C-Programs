/*Write a C program to execute a goto statement by following the given algorithm
ALGORITHM:
Step 1: Input a number
Step 2: b = number+5
Step 3: c = number+10
Step 4: declare LOOP:do
Step 5: Check if (number==b)
Step 5.1: a = a + 1
Step 5.2: goto LOOP
Step 6: print number
Step 7: a = a+1
Step 8: while(number < c)
Step 9: Stop.*/
#include <stdio.h>
int main(){
	int num,a, b, c;
	printf("Enter a value: ");
	scanf("%d", &num);
	b = num + 5;
	c = num + 10;
	
	do{
		loop:
		if(num==b){
			num++;
		} else{
			printf("Value of a: %d\n", num);
			num++;
		}
	
	} while(num<c);
	
	return 0;
}
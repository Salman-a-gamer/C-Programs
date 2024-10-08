/*C program to demonstrate the size of operator. ( char, short, int, long, float, double, long double, long long ) using switch case*/
#include <stdio.h>
int main(){
	int a;
		printf("Available cases are\n1.Char\n2.Short\n3.int\n4.long\n5.float\n6.double\n7.long double\n8.long long\nSelect a case: ");
	scanf("%d" ,&a);
	switch(a){
		case 1:
			printf("Size Of char: %d\n", sizeof(char));
			break;
		case 2:
			printf("Size Of short: %d\n", sizeof(short));
			break;
		case 3:
			printf("Size Of int: %d\n", sizeof(int));
			break;
		case 4:
			printf("Size Of long: %d\n", sizeof(long));
			break;
		case 5:
			printf("Size Of float: %d\n", sizeof(float));
			break;
		case 6:
			printf("Size Of double: %d\n", sizeof(double));
			break;
		case 7:
			printf("Size Of long double: %d\n", sizeof(long double));
			break;
		case 8:
			printf("Size Of long long: %d\n", sizeof(long long));
			break;
		default:
			printf("Select the correct case\n");
			break;
	}

return 0;
}
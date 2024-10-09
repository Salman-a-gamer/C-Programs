/* C program to read two integer values and a basic operator from the keyboard and based on that operator performs the specified operation.*/
#include <stdio.h>
int main(){
	char op;
	int a,b, result;
	printf("Enter an operator: ");
	scanf("%c", &op);
	printf("Enter two integer values: ");
	scanf("%d%d", &a,&b);

	switch(op){
		case '+':
			result = a + b;
			printf("Result: %d\n", result);
			break;
		case '-':
			result = a - b;
			printf("Result: %d\n", result);
			break;
		case '*':
			result = a *b;
			printf("Result: %d\n", result);
			break;
		case '/':
			result = a/b;
			printf("Result: %d\n", result);
			break;
		default:
			printf("Invalid operator\n");
			break;
	}

    return 0;
}
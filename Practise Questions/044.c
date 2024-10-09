/* C program to print weekday based on given number using if else ladder statement.*/
#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	switch(a){
		case 1:
			printf("Sunday\n");
			break;
		case 2:
			printf("Monday\n");
			break;
		case 3:
			printf("Tuesday\n");
			break;
		case 4:
			printf("Wednesday\n");
			break;
		case 5:
			printf("Thrusday");
			break;
		case 6:
			printf("Friday\n");
			break;
		case 7:
			printf("Saturday\n");
			break;
		default:
			printf("Invalid input\n");
			break;
		}
    return 0;
}
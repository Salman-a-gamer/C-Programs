/*C program to find the Calculator(+,-*,/)*/
#include <stdio.h>

void add(){
	int n,m,i,sum=0;
	printf(" How many numbers you want to add: ");
	scanf("%d",&n);
	printf(" Enter the numbers: \n");
	for(i=1;i<=n;i++){
		scanf("%d",&m);
		sum += m;
	}
	printf(" Total Sum of the numbers = %d\n",sum);
}

void sub(){
	int m,n;
	printf(" The first number is: ");
	scanf("%d",&m);
	printf(" The second number is: ");
	scanf("%d",&n);
	printf(" The subtraction of %d - %d is: %d", m,n,m-n);
}

void mult(){
	int m,n;
	printf(" The first number is: ");
	scanf("%d",&m);
	printf(" The second number is: ");
	scanf("%d",&n);
	printf(" The multiply of %d * %d is: %d",m,n,m*n);
}

void div(){
	int m,n;
	printf(" The first number is: ");
	scanf("%d",&m);
	printf(" The second number is: ");
	scanf("%d",&n);
	printf(" \n The division of %d / %d is: %d",m,n,m/n);
}

void main(){
	int n,choice;
	printf(" Select an operation to perform the calculation in C Calculator:  \n 1.Addition  \t \t 2.Subtraction \n 3.Multiplication \t 4.Division \n Make a Choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mult();
			break;
		case 4:
}
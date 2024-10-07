/*C Program to find the net salary of an employee when Basic Salary and Deductions are given.
Logic:  By using the below calculations.
DA — 75% of Basic Salary HRA — 15% of Basic Salary
Net Salary — Basic Salary + DA + HRA - Deductions*/

#include <stdio.h>
int main(){
	int bs,d;
	float da,hra,ns;
	printf("Enter basic salary: ");
	scanf("%d", &bs);
	printf("Enter deductions: ");
	scanf("%d", &d);
	da = bs*0.75;
	hra = bs*0.15;
	ns = bs + da + hra -d;
	printf("Net salary is: %.2f\n", ns);
}
/*C program to input basic salary of an employee and calculate gross salary according to given conditions.
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
Basic Salary >= 20001 : HRA = 30%, DA = 95%
Note: The formula for DA and HRA is da = basic_salary * (DA/100)
If DA = 80% then the statement becomes da = basic_salary * (80/100).
Calculate final gross salary using the formula gross_salary = basic_salary + DA + HRA*/
#include <stdio.h>
int main(){
	float bs,hra,da,gs;
	scanf("%f", &bs);
	if(bs<=10000){
		hra = (bs*20)/100;
		da = (bs*80)/100;
	} else if(bs>=10001 && bs<=20000){
		hra = (bs*25)/100;
		da = (bs*90)/100;
	} else if(bs>=20001){
		hra =(bs*30)/100;
		da = (bs*95)/100;
	}
	
	gs = bs + da + hra;
	printf("Gross Salary: %.2f\n", gs);
    return 0;
}
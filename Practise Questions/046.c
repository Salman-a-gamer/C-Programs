/* C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units RS. 0.50/ unit
For next 100 units RS. 0.75/ unit
For next 50 units RS. 1.20/ unit
For unit above 250 RS. 1.50/ unit
An additional surcharge of 20% is added to the bill.
Note: After calculating total amount. Calculate the surcharge amount i.e. sur_charge = total_amt * 0.20. Add surcharge amount to net amount. Which is given by net_amt = total_amt + sur_charge.*/
#include <stdio.h>
int main(){
	int units;
	float total, net=0;
	scanf("%d", &units);
	
	if(units<=50){
		total = 0.5*units;
		net = total*0.2;
		} 
	else if(units>50 && units<=150){
		int n = units - 50;
		total = n*0.75 + 50*0.5;
		net = total*0.2;
		} 
	else if(units>150 && units <=200){
		int n = units - 150;
		total = n*1.2 + 50*0.5 + 100*0.75;
		net = total*0.2;
		}
	else 
		{
		int n = units - 200;
		total = n*1.50 + 50*0.50 + 100*0.75 + 50*1.20;
		net = total*0.2;
		} 
	printf("Electricity Bill: %.2f\n", net+total);
    return 0;
}
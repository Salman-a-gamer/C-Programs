/* C program to check whether the given number is PRIME or not */
#include <stdio.h>
void main(){
	int num, i, j, flag=0;
	printf("ENTER A NUMBER: ");
	scanf("%d", &num);
	for(i=2;i<num; i++)
	{
	if(num%i==0){
		flag = 1;
		break;
	}
	}
	if(flag==1){
	printf("%d IS NOT A PRIME NUMBER\n", num);
	} else{
	printf("%d IS A PRIME NUMBER\n", num);
	}
}

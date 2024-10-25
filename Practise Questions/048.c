/*Program to find whether the given number is palindrome or not.*/
#include <stdio.h>
void main()
{
	int num, temp1, temp2, res=0;
	printf("Enter an integer: ");
	scanf("%d", &num);
	temp1= num;
	while(num!=0)
	{
	temp2= num%10;
    res=res*10+temp2;
    num= num/10;
	}
if(temp1 == res)
{
printf("%d is a palindrome\n", temp1);
} else
{
printf("%d is not a palindrome\n", temp1);
}

}

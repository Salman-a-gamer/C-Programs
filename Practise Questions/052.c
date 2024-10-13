/*C program to print the multiplication table of a number.*/
#include <stdio.h>
int main(){
	int n,ans;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(int m= 1; m <=10; m++){
		ans = n*m;
		printf("%d * %d = %d\n" ,n, m, ans);
	}
	return 0;
}
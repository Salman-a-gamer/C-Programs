/*C program to check whether the given input character is an integer or a character, if it is a character then check whether it is an uppercase or lowercase character.*/
#include <stdio.h>
int main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);

	if(ch>=48 && ch<=57){
		printf("Input character is digit\n");
	} else if(ch >=65 && ch<= 90){
		printf("Input character is an uppercase character\n");
	} else if(ch >= 97 && ch <= 122){
		printf("Input character is a lowercase character\n");
	} else{
		printf("Input character is a special character\n");
	}
	return 0;
}
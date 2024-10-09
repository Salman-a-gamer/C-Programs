/* C program to input an alphabet and check whether it is vowel or consonant using switch case.*/
#include <stdio.h>
int main(){
	char ch;
	scanf("%c", &ch);
	switch(ch){
		case 'a':
			printf("%c is a vowel.\n", ch);
			break;
		case 'e':
			printf("%c is a vowel.\n", ch);
			break;
		case 'i':
			printf("%c is a vowel.\n", ch);
			break;
		case 'o':
			printf("%c is a vowel.\n", ch);
			break;
		case 'u':
			printf("%c is a vowel.\n", ch);
			break;
		default:
			printf("%c is a consonant.\n", ch);
		break;
	}
    return 0;
}
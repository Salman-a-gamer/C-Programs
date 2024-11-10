/* program to determine whether the input character is a "vowel" or "consonant". Print "Invalid" if the given input is not an alphabet.*/

#include <ctype.h>
#include <stdio.h>
void main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if(isalpha(ch)==0){
		printf("Invalid\n");
		return;
	}

	if(ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch== 85 || ch ==97 || ch == 101 || ch == 105 || ch==111 || ch == 117){
		printf("Vowel\n");
	} else {
		printf("Consonant\n");
	}

	return;
}
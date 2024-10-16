/*Different way of using a ternary operator: 
C program that uses multiple chained ternary (conditional)
operators to determine the grade of a student based on a score (e.g.,
90–100 = A, 80–89 = B, etc.). 
*/
#include <stdio.h>

int main() {
    int score;
    char grade;
    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);


    grade = (score>=90 && score<=100) ? 'A':
        	(score>=80 && score <90) ? 'B':
        	(score>=70 && score<80) ? 'c':
        	(score>=60 && score<70) ? 'D':
        	(score<=50 && score>40) ? 'E': 'F'  ;

    printf("The student's grade is: %c\n", grade);

    return 0;
}


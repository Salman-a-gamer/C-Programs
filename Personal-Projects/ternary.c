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


    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
        return 1; 
    }

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';
    printf("The student's grade is: %c\n", grade);

    return 0; 
}

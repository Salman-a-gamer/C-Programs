// C program to read the student details as name, rollno, 3 subject marks and Find the total and average of the marks of student and display all the details. Declare Student structure as required.
#include <stdio.h>
struct student {
	char name[50];
	int roll;
	int m1,m2,m3;
	int total;
	float avg;
};

void main(){
	struct student std;
	printf("Enter student name: ");
	fgets(std.name,sizeof(std.name),stdin);
	printf("Enter student roll number: ");
	scanf("%d",&std.roll);
	printf("Enter English subject marks: ");
	scanf("%d",&std.m1);
	printf("Enter Maths subject marks: ");
	scanf("%d", &std.m2);
	printf("Enter Physics subject marks: ");
	scanf("%d",&std.m3);
	std.total = std.m1 + std.m2 + std.m3;
	std.avg = std.total / 3.0;
	printf("Students details:- \n");
	printf("Name : %s", std.name);
	printf("Roll Number : %d\n",std.roll);
	printf("Marks in English: %d\n",std.m1);
	printf("Marks in Maths: %d\n",std.m2);
	printf("Marks in Physics: %d\nTotal marks: %d\nAverage of the marks: %f", std.m3,std.total,std.avg);
}
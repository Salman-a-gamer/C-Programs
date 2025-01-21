//  program to read the student details as name, roll no, 3 subject marks from the keyboard and find the total and average of the student and display all the details using pointers to structures. Declare Student structure as required.
#include <stdio.h>
struct student{
	char name[50];
	int roll;
	int marks[3];
}stu;

void main(){
	int i;
	struct student *p = &stu;
	printf("Enter student details: \nEnter name:");
	fgets(p->name,50,stdin);
	printf("Enter Roll number:");
	scanf("%d",&p->roll);
	printf("Enter the 3 subject marks:");
	for(i=0;i<3;i++){
		scanf("%d",&p->marks[i]);
	}
	printf("The student details are as follow:\n");
	printf("Name=%s",p->name);
	printf("Roll number=%d\n",p->roll);
	int total = p->marks[0] + p->marks[1] + p->marks[2];
	printf("Total marks of the student=%d\n",total);
	printf("Average marks of the student=%d",total/3);
}
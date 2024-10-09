/*C program to print the student grade based on average marks: If avg>=70 grade=Distinction , if avg>=60 but <70 grade="First class", If avg>45 but  <60 grade="Second class" otherwise grade="FaiI".
Grades should be any one of the following
Distinction
First class
Second class
Fail
Pass*/
#include <stdio.h>
int main(){
	int m1,m2,m3,m4,m5;
	float avg;
	printf("Enter the 5 subjects marks: ");
	scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
	avg = (m1 +m2+m3+m4+m5)/5;

	if(m1<35 || m2<35 || m3<35 || m4<35 || m5<35){
		printf("Fail\n");
		return;
	} else if(avg>=70){
		printf("Distinction\n");
	} else if(avg >=60 && avg<70){
		printf("First class\n");
	} else if(avg >45 && avg<60){
		printf("Second class\n");
	} else {
		printf("Pass\n");
	}
    return 0;
}
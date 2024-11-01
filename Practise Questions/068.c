/*C Program to find the sum and average marks of a student using arrays.*/
#include <stdio.h>
int main(){
	int i, index, marks, sum=0;
	float avg;
	printf("Enter number of subjects of a student: ");
	scanf("%d", &index);
	int a[index];
	printf("Enter marks: ");
	for(i=0; i<index; i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<index;i++){
		sum+=a[i];
	}
	avg = (float)(sum) / (index);
	printf("Sum of marks: %.2f\n",(float)sum);
	printf("Average of marks: %.2f\n", avg);
	return 0;
}
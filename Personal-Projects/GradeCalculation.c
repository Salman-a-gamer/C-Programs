/*I wrote a program to calculate marks and grade after a semester for my seniors curriculum*/
#include <stdio.h>
int main(){
	int min1,min2,minfinal,assign1,assign2,assignfinal,mse1,mse2,msefinal,ese,finalmarks;
	char grade;
	printf("Enter your two minor marks, two assignments marks, two mse marks, ese marks: \n");
	scanf("%d%d%d%d%d%d%d",&min1,&min2, &assign1,&assign2,&mse1,&mse2,&ese);
	minfinal = (min1+min2)/4;
	assignfinal = (assign1+assign2)/4;
	if(mse1>mse2){
		msefinal= mse1*0.7 + mse2*0.3;
	} else{
		msefinal= mse1*0.3 + mse2*0.7;
	}
	finalmarks = minfinal+ assignfinal + msefinal + ese;
	switch(finalmarks){
		case 90 ... 100:
			grade='S';
			break;
		case 80 ... 89:
			grade = 'A';
			break;
		case 70 ... 79:
			grade = 'B';
			break;
		case 60 ... 69:
			grade = 'C';
			break;
		case 45 ... 59:
			grade = 'D';
			break;
		case 35 ... 44:
			grade = 'P';
			break;
		case 0 ... 34 :
			grade = 'F';
			break;
	}

	printf("Your marks: %d\nYour grade: %c",finalmarks, grade);
}
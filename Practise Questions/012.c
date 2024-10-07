/*C program to output an integer in decimal format and a floating-point number in floating format. Experiment with outputting an integer in float format and vice versa.*/

int main(){
	int a;
	float f;
	printf("Enter an integer value: ");
	scanf("%d", &a);
	printf("Enter a floating point number: ");
	scanf("%f", &f);

	printf("Integer value in decimal format = %d\n", a);

	printf("Integer value in floating format = %f\n", a*1.0);
	int i = (int)f;
	printf("Floating value in decimal format = %d\n", i);

	printf("Floating value in floating Format = %f\n", f);
    return 0;
}
/*Program to convert meters to yards*/
int main(){
	float m;
	float y;
	printf("Enter the value in meters: ");
	scanf("%f", &m);
	y =  m*1.093613;
	printf("%.3f meter : %.3f yard\n", m,y);
    return 0;
}
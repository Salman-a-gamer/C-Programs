#include <stdio.h>
void main(){
	int i, size, median,temp,m1,m2;
	printf("Enter Array Size: ");
	scanf("%d",&size);
	printf("Enter Array Elements :\n");
	int a[size];
	for(i=0;i<size;i++){
		scanf("%d", &a[i]);
	}

	Loop:
	for(i=1;i<size;i++){
		if(a[i]<a[i-1]){
			temp=a[i-1];
			a[i-1]=a[i];
			a[i]=temp;
		}
	}
	for(i=1;i<size;i++){
		if(a[i]<a[i-1]){
			goto Loop;
		}
	}

	printf("Array After Sorting :\n");
	for(i=0;i<size;i++){
		printf("%d\n",a[i]);
	}
	if(size%2!=0){
		temp = size/2 ;
		median = a[temp];
	}
	else{
		m1 = a[size/2 - 1] + a[size/2];
		median = m1/2;
    }
	printf("Median: %d\n",median);
}
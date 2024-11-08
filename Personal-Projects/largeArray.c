#include <stdio.h>
void main()
{
    int n,i,large;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("nigga enter elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    large = 0;
    for(i=0;i<n;i++){
        if(a[i]>large){
            large = a[i];
        }
    }
    printf("largest number is %d\n", large);
}
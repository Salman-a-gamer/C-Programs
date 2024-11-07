#include <stdio.h>

void main()
{
    int i,j,k,n;
    printf("enter number:"); 
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<=n-1-i;j++){
            printf(" ");
        }
        for(k=1;k<=(2*i)+1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=(2*n)-1-2*(i-1);k++){
            printf("*");
        }
        printf("\n");
    }
}
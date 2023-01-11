#include<stdio.h>

int main()
{

    int n,i,j,k;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=n; i>=1; i--)
    { 
       k=i;
        for(j=1; j<=n; j++)
        { 
          printf("%3d",k);
         k+=n;
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
       for(j=1; j<=n; j++)
       {
        if(i==1 || i+j==n+1 || i==n)
         printf("*");
        else
          printf(" ");
       }
       printf("\n");
    }
    return 0;
}
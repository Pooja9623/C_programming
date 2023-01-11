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
        if(i==1 || j==1|| i==n || j==n )
         printf("%c",i+64);
        else
          printf(" ");
       }
       printf("\n");
    }
    
    for(i=1; i<=n; i++)
    {
       for(j=1; j<=n; j++)
       {
        if(i==1 || j==1 || i==n || j==n )
         printf("%d",i);
        else
          printf(" ");
       }
       printf("\n");
    }
    return 0;
}
// prime number between two integers

#include<stdio.h>

int main()
{
    int x,y,i,n;
    
    printf("Enter two integers:");
    scanf("%d %d",&x,&y);
    
    for(n=x; n<=y; n++)
    {
        for(i=2; i<n; i++)
        {
         if(n%i==0) break;
        }
          if(i==n)
            printf("%d ",n);
    }
    return 0;
}

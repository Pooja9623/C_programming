#include<stdio.h>

int main()
{
    int n,x,m;
    
    for(n=1; n<=1000000; n++)
    {
       x=n;
       m=0;
       while(x>0)
        {
          int r = x%10;
          m += r*r*r;
          x /= 10;
        }
        if(m == n)
        printf("%d ",n);
    }
    return 0;
}
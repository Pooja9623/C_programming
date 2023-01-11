#include<stdio.h>
// x^n=

int main()
{
    int x,n,i,y;
    printf("Enter base(x) and exponent(n):");
    scanf("%d %d",&x,&n);
    
    y = i = 1;
    while(i<=n)
    {
    y*=x;
    i++;
    }
    printf("%d raise to %d = %d",x,n,y);
    return 0;
}

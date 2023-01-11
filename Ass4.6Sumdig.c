#include<stdio.h>

int main()
{
    int d,s,n;
   
   
    printf("Enter an digit :");
    scanf("%d",&n);
    
    s = d = 0;
    while(n>0)
    {
        s=s*10+n%10;
        d++;
        n/=10;
     }
    
    printf("Digits = %d, Sum = %d",d,s);
    return 0;
}
#include<stdio.h>

int main()
{
    int d,s,n;
   
   
    printf("Enter an digit :");
    scanf("%d",&n);
    
    s = 0;
    d = n;
    while(n>0)
    {
        s=s*10+n%10;
        n/=10;
     }
    
    printf("Reverse = %d\n",s);
    
    if(d == s)
    printf("The number %d is a palindrome",d);
    
    return 0;
}
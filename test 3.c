#include<stdio.h>

int main()
{
    int a,s,p,t,u,v;
    
    printf("Accept a two digit number:");
    scanf("%d",&a);
    
    u = a%10;
    v = a/10;
    
    s = u+v;
    p = u*v;
    
    t = s+p;
    
    printf("%d %d",a,t);
    
    if(a==t)
    { printf("Special 2-digit number");
    }
    else 
    printf("Not a special 2-digit number");
    
    
    return 0;
}
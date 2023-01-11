#include<stdio.h>
//Sum of integers between x & y
int main()
{
    int x,y,s,i;
    printf("Enter two integer:");
    scanf("%d %d",&x,&y);
    
    if(x>y)
    {
    int t;
    t=x;
    x=y;
    y=t;
    }
    i=x;
    s=0;
   
    while(i<=y)
    {
    s+=i;
    i++;
    }
    printf("sum = %d",s);
    return 0;
}

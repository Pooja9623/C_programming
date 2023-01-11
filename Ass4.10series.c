#include<stdio.h>

int main()
{
    int n,i;
    float x,d,s=0;
   
   
    printf("Enter no. of terms :");
    scanf("%d",&n);
    
    printf("Enter value of x :");
    scanf("%f",&x);
    
    for(i=1, d=x; i<=n; i++)
    {
     s+=i/d;
     d*=x;
     }
    printf("Sum = %f",s);
    return 0;
}
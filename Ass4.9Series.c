#include<stdio.h>

int main()
{
    int n,i,x,d,s=0;
   
   
    printf("Enter no. of terms :");
    scanf("%d",&n);
    
    printf("Enter value of x :");
    scanf("%f",&x);
    
    for(i=1,d=1; i<=n;d+=2, i++)
    {
    	s+= d*x;
    
    }
    printf("%d",s);
    return 0;
}

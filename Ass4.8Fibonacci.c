#include<stdio.h>

int main()
{
    int n,a,b,c,i;
   
   
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    
    a = b = 1;
    for(i=1; i<=n; i++)
    {
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
     }
    
    return 0;
}

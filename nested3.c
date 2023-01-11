#include<stdio.h>

int main()
{
    int n,m,no,s,i,mno,mso;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
       printf("Enter a number:");
       scanf("%d",&no);
    
       m = no;
       s = 0;
    
        while(m>0)
        {
         s+=m%10;
         m/=10;
        }
        
        if(s>mso)
        {
        printf("%d ",mno);
        }
    }
    return 0;
}
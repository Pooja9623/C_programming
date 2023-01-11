//Sum of digits and no. of digits
#include<stdio.h>

int main()
{
    int d,s,n;
   
   
    printf("Enter an digit :");
    scanf("%d",&n);
    
    s = d = 0;
    while(n>0)
    {
        s+=n%10;
        d++;
        n/=10;
     }
    
    printf("Digits = %d, Sum = %d",d,s);
    return 0;
}

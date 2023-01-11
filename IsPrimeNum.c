#include<stdio.h>

int main()
{
    char ch;
    int i,n;
   
    printf("Enter an integer:");
    scanf("%d",&n);
    
    for(i=2; i<n; i++)
    {    
        if(n%i==0)
        {
            printf("%d is not a prime number",n);
            break;
        }
    }  
    
    if(i==n) 
    printf("%d is a prime number",n);
    
    return 0;
}

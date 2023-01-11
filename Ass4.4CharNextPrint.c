#include<stdio.h>

int main()
{
    char ch;
    int i,n;
   
    printf("Enter an character and an integer:");
    scanf("%c %d",&ch,&n);
    
    for(i=1; i<=n; i++)
    {
    printf("%c ",ch+i);}
    return 0;
}
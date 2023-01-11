#include<stdio.h>

void disp_next(char ch,int n)
{
    int i;   
    for(i=1; i<=n; i++)
    {
      printf("%c ",ch+i);
    }
    
}

int main()
{
    char ch;
    int n;
    
    printf("Enter an character and an integer:");
    scanf("%c %d",&ch,&n);
    
    disp_next(ch,n);
    return 0;
}

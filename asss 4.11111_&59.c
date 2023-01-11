#include<stdio.h>

int main()
{
    int a = 0, d = 0;
    char c;
    
    while((c = getchar())!=EOF)
    {
         if((c>='A' && c<='Z') || (c>='a' && c<='z'))
          a++;
         if(c>='0' && c<='9')
          d++;
     }
     printf("No. of alphabet = %d, No. of digits = %d",a,d);
    return 0;
}
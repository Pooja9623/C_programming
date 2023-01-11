//print even number till n

#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter an integer:");
    scanf("%d",&n);
    for(i=0; i<=n; i+=2)
    {
    printf("%d ",i);
     }
    return 0;
}

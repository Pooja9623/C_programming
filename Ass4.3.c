#include<stdio.h>
#include<math.h>

int main()
{
    int x,n,y;
    printf("Enter two integers :");
    scanf("%d %d",&x,&n);
    
    y=pow(x,n);
    printf("Ans = %d",y);
    return 0;
}
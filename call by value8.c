#include<stdio.h>
void swapv(int a, int b)
{
    int t;
    
    t = a;
    a = b;
    b = t;
}

int main()
{
    int x,y;
    printf("Enter two integers:");
    scanf("%d %d",&x,&y);
    
    printf("Before swap x=%d, y=%d\n",x,y);
    
    swapv(x, y);
    
    printf("After swap x=%d, y=%d",x,y);
    
    return 0;
}
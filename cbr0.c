#include<stdio.h>
int swap(int *a, int *b)
{
    int t;
    
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x,y;
    printf("Enter two integers:");
    scanf("%d %d",&x,&y);
    
    printf("Before swap x=%d, y=%d\n",x,y);
    
    swapr(&x, &y);
    
    printf("After swap x=%d, y=%d\n",x,y);
    printf("Address of x=%u",&x);
    
    return 0;
}

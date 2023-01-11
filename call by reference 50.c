#include<stdio.h>

int main()
{
    void calc(float, float *,float *);
    float r,a,c;
    
    printf("Enter radius");
    scanf("%f",&r);
    
    calc(r,&a,&c);
    
    printf("Area = %f\nCircumference = %f",a,c);
    
    return 0;
}

void calc(float x, float *y,float *z)
{
    *y = 3.14 * x * x;
    *z = 2 * 3.14 * x;
}
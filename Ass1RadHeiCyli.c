#include<stdio.h>

int main()
{
	float r,h,sa,v;
	printf("Enter dimensions of cylinder Radius & Height:");
	scanf("%f %f",&r,&h);
	
	sa = 2*3.14*r*(r+h);
	v = 3.14*r*r*h;
	
	printf("Surface area = %.2f \nVolume = %.2f",sa,v);

	return 0;
}

#include<stdio.h>

int main()

{
	float r,h,a,v;
	
	printf(" Entre radius &height of the cylinder:");
	scanf("%f %f",&r,&h);
	
	a=2*3.14*r*r+2*3.14*r*h;
	v=3.14*r*r*h;
	
	printf("area=%f\nvolume=%f",a,v);
	
	return 0;
	
	}

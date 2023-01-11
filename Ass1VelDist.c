#include<stdio.h>

int main()
{
	float u,a,t,v,s;
	printf("Enter initial velocity, acceleration and time in sec:");
	scanf("%f %f %f",&u,&a,&t);
	
	v = u +a*t;
	s = u+a*t*t;
	printf("Final velocity = %.2f \nDistance travelled = %.2f",v,s);
	
	
	return 0;
}

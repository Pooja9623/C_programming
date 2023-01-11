#include<stdio.h>

int main()

{
	int a,b,c,v;
	
	printf("accept marks of three subject out of 100: ");
	scanf("%d %d %d",&a,&b,&c);
	
	v = (a+b+c)/3;
	
	printf("Average marks = %d",v);
	
	return 0;
	
}

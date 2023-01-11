#include<stdio.h>

int gcd(int a, int b)
{
	if(b==0) return a;
	else return gcd(b, a%b);
}

int main()
{
	int a,b;
	printf("Enter two integers:");
	scanf("%d %d",&a,&b);
	
	printf("GCD of (%d,%d) is %d",a,b,gcd(a, b));
	
	retern 0;
}

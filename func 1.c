#include<stdio.h>
int f(int n)
{
	if(n==0) return 1;
	else return n*f(n-1);
}

int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("Factorial of %d is %20d",n,f(n));
	
	return 0;
}

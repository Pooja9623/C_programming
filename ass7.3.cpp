#include<stdio.h>

int is_prime(int n)
{	int i;
	
	for (i=2; i<n; i++)
	{
		if(n%i==0)
		 return 0;
	}
	return 1;
}

int main()
{
	int n;
	printf("Enter an integer.");
	scanf("%d",&n);
	
	if(is_prime(n)) printf("%d is prime.",n);
	else printf("%d is not prime.",n);
}

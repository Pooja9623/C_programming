#include<stdio.h>

int is_prime(int n)
{
	int i;
	
	for (i=2; i<n; i++)
	{
		if(n%i==0)
		 return 0;
	}
	return 1;
}


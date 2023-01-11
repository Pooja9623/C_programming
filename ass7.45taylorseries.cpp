#include<stdio.h>

int power(int x, int y)
{
	int ans=1, i;
	
	for(i=1; i<=y; i++)
	{
		ans*=x;
	}
	
	return ans;
}

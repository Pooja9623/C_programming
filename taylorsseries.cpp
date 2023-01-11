#include<stdio.h>

float power(float x, int y)
{
	float ans=1, i;
	
	for(i=1; i<=y; i++)
	{
		ans*=x;
	}
	
	return ans;
}

int fact(int n)
{
	int ans=1, i;
	for(i=1; i<=n; i++)
	{
		 ans*=i;
	}
	return ans;
}

int main()
{
	float x,s=0;
	int n,i;
	
	printf("Emter value of x and no. of terms n:");
	scanf("%f %d",&x,&n);
	
	for(i=0; i<n; i++)
	{
		s += power((-1), i)*power(x, 2*i+1/fact(2*i+1));
	}
	
	printf("Sum of sin x = %f",s);
	return 0;
}

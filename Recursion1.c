#include<stdio.h>

int fact_nrec(int n)
{
	int f=1,i;
	
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}

int fact_rec(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact_rec(n-1);
}

int main()
{
	int n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	printf("%d %d",fact_nrec(n),fact_rec(n));
	return 0;
}

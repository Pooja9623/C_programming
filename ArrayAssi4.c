#include<stdio.h>

int prime(int n)
{
	int i;
	for(i=2; i<n; i++)
	{
		if(n%i==0) return 0;
	}
	
	return 1;
}


void display(int a[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("%4d",a[i]);
	}
}

int main()
{
	int n, prime[20], i,j=0,no;
	
	printf("Enter no. of elements:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter element:");
		scanf("%d",&no);
		
		if(prime(no))
		{
			prime(j++)=no;
		}
	}
	
	display(prime, j);
	
	return 0;
}

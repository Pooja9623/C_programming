//reverse Array

#include<stdio.h>

void accept(int a[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{	printf("[%d] = ",i);
		scanf("%d",&a[i]);
		//scanf("%d",a+i);
	}
}

 display(int a[], int n)
{
	int i;
	
	for(i=n-1; i>=0; i--)
	{
		printf("%4d",a[i]);
	}
	
}

int main()
{
	int n,b[100];
	
	printf("Enter no. of elements:");
	scanf("%d",&n);
	
	accept(b,n);
	
	display(b,n);
	
	return 0;
}

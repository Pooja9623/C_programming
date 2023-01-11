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

int count(int a[],int n,int x)
{
	int i,m=0;
	
	for(i=0; i<n; i++)
	{
		if(a[i]==x) m++;
	}
	
	return m;
}

int main()
{
	int b[100],n,x;
	
	printf("Enter no. of elements:");
	scanf("%d",&n);
	
	accept(b ,n);
	
	printf("Enter element:");
	scanf("%d",&x);
	
	printf("%d occurs %d times.",x,count(b,n,x));
	
	return 0;
}

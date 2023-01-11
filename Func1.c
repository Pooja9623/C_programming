#include<stdio.h>

int isEven(int x)
{
	return x%2==0;
}

int accept(int i)
{   int b;
	printf("enter element %d:",i);
	scanf("%d",&b);
	return b;
}

int main()
{
	int n,i;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		int a = accept(i);
		
		if(isEven(a)) printf("%d is even.\n",a);
		else printf("%d is odd.\n",a);
	}
	
	return 0;
}

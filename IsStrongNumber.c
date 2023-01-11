#include<stdio.h>

int main()
{
	int i,j,n,x,s,p;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	x=n;
	s=0;
	while(x!=0)
	{
		j=x%10;
		p=1;
		x/=10;
		for(i=1;i<=j;j++)
		{
			p*=i;
		}
		s+=p;
				
	}
	if(n==s) printf("%d is Strong number.",n);
	else printf("%d is not Strong number.",n);
	
	return 0;
}

#include<stdio.h>

int main()
{
	int i,j,n,x,s,p,m;
	
	printf("Enter a number:");
	scanf("%d",&m);
  for(n=1;n<=m;n++)
  {
	x=n;
	s=0;
	while(x!=0)
	{
		j=x%10;
		p=1;
		x/=10;
		for(i=1;i<=j;i++)
		{
			p*=i;
		}
		s+=p;
				
	}
	if(n==s) printf("%d ",n);
  }
	
	return 0;
}

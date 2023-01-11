#include<stdio.h>

int main()

{
	int i,r,m,s;
	
	for(i=1;i<=500;i++)
	{
		m=i;
		s=0;
		while(m>0)
		{
			r = m%10;
			s = s + (r*r*r);
			m = m/10;
		}
		
		if(s==i) printf("%d ",i);
	}
	
	return 0;
}

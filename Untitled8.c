#include<stdio.h>

int main()
{
     int i,j,n;
     
     printf("enter no of rows");
     scanf("%d",&n);
	for(i=1; i<=n*2-1; i++) 
	{if(i==(n))
		printf("# ");
		else
		printf("  ");
	}
		printf("\n");
		
	for(i=n-1; i>=1; i--)
	 {	
		for(j=1; j<=i; j++) 
		{  if(j==i)
			printf("# ");
		else printf("  ");
		}
			  
		for(j=1;j<=2*(n-i)-1;j++)
		{
			printf("  ");
		}
			  
		for(j=1; j<=i; j++)
		 {
			if(j==1) printf("# ");
			else printf("  ");
		}
			  
		printf("\n");
		 }
		    
		for(i=2;i<n;i++)
		 {
			for(j=1;j<=i;j++)
			{
			  if(j==i) printf("# ");
			  else printf("  ");
			}
		for(j=2*(n-i)-1;j>=1;j--) {
			printf("  ");
			}
			
			for(j=1;j<=i;j++) {
				if(j==1) printf("# ");
				else printf("  ");
			}
			
			printf("\n");
		}
		for(i=1; i<=n*2-1; i++) {
			
			if(i==n) printf("# ");
			else printf("  ");
	}
	
	return 0;
}

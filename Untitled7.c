#include<stdio.h>

int main()
{
     int i,j,n;
     
     printf("enter no of rows");
     scanf("%d",&n);
	for(i=1; i<=n*2-1; i++) 
	{
		printf("# ");
	}
		printf("\n");
		
	for(i=n-1; i>=1; i--)
	 {	
		for(j=1; j<=i; j++) 
		{
			printf("# ");
		}
			  
		for(j=1;j<=2*(n-i)-1;j++)
		{
			printf("  ");
		}
			  
		for(j=1; j<=i; j++)
		 {
			printf("# ");
		}
			  
		printf("\n");
		 }
		    
		for(i=2;i<n;i++)
		 {
			for(j=1;j<=i;j++)
			{
			printf("# ");
			}
		for(j=2*(n-i)-1;j>=1;j--) {
			printf("  ");
			}
			
			for(j=1;j<=i;j++) {
				printf("# ");
			}
			
			printf("\n");
		}
		for(i=1; i<=n*2-1; i++) {
			
			printf("# ");
	}
	
	return 0;
}

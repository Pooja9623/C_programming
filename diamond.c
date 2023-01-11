#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("Enter no. of rows:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{  
	  for(j=1;j<=n;j++)
	  {	if(i==1 || i==n)
		{
		if(j==(n-n/2)) printf("* ");
		else printf("  ");
		}
		
        else if(i<(n+1)/2){
        	if(j==((n+1)/2-i+1) || j==((n+1)/2+i-1) ) printf("* ");
        	else printf("  ");
		} 
			
        else if(i==(n+1)/2) {
        	if(j==1 || j==n) printf("* ");
        	else printf("  ");
		} 
		
	    else {
		if(j==((n+1)/2-n+i) || j==((n+1)/2+n-i)  )printf("* ");
		else printf("  ");
		}
    }
	  printf("\n");
	}
	
	return 0;
}

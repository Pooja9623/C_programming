#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*int main() 
{

    int i,j,n;
    scanf("%d", &n);
  	
    for(i=1; i<=2*n-1; i++)
    {
      for(j=1;j<=2*n-1;j++)
      { if(i==1 || i==2*n-1 || j==1 || j==2*n-1)
          printf("%d ",n);
        else if(i<=n && j==n) printf("%d ",n-i+1);
        else if(i>n && j==n)printf("%d ",i-n+1);
        else if(i<=n && (j==i || i+j==2*n)) printf("%d ",n-i+1);
        else if(i>n && (j==i || i+j==2*n)) printf("%d ",i-n+1);
        else printf("* ");
        
      }
      printf("\n");
    }
    return 0;
}*/

int main()
{
	int i,j,n,start,end,size;
	scanf("%d",&n);
	
	size = 2*n-1;
	start = 0;
	end = size-1;
	int a[size][size];
	
	while(n!=0)
	{
	for(i=start;i<=end;i++)
	{
		for(j=start;j<=end;j++)
		{
			if(i==start || j==start || i==end || j==end) 
			   a[i][j] = n;		
		}
	}
	    ++start;
		--end;
		--n;
    }
    
    for(i=0; i<size;i++)
    {
    	for(j=0;j<size; j++)
    	{
    		printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

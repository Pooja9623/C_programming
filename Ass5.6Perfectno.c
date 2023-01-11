#include<stdio.h>

int main()

{
	int i,n=500,s=0;
	
	
	for(n=1;n<500;n++)
	{
		s=0;
	   {
	    for(i=1;i<n;i++)
	     	{
			 	if(n%i==0)
			    s=s+i;
	          
		    }  
		
		 if(s==n)
		 {
		 	
		    printf("%d: ",n);
		      for(i=1;i<n;i++)
			  {
			  if(n%i==0)
			    printf("%d ",i);
			}
			printf("\n");
	     }
     	}
	}
	
	return 0;
}

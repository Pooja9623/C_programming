#include<stdio.h>


int is_prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0) return 0;
	}
	
	return 1;
	 
 }

 int main()
 {
 	int n=2,count=0;
 	
 	while(count!=10)
 	{
 	 if(is_prime(n))	
 	 
 	 {
 	 	printf("%d ",n);
 	 	count++;
 	 	
	  }
 	   n++;
 	
    }
    return 0;
 
}

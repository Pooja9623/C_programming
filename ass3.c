#include<stdio.h>

int main()

{
	int n,i;

    printf("accept integer n:");
    scanf("%d",&n);
    
/*	i=0;
    
    while(i<=n)
     {
     	printf("%d ",i);
     	i+=2;
     	
     } */  
    



for(i=0; i<=n; i+=2)
  {
  	printf("%d ",i);
  }
  
  return 0;
}

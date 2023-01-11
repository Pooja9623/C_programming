#include<stdio.h>

int is_prime(int m)
{int i=2;
	for(i;i<m;i++){
		if(m%i==0) return 0;
	}
     return 1;
}

void display(int b[],int n)
{int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	} 
}

int main()
{ int prime[100],n,no,i,j=0;
  printf("Enter no. of elements:");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  { printf("Enter element %d:",i+1);
    scanf("%d",&no);
	if(is_prime(no)) prime[j++]=no;
  }
  
  display(prime, j);
  
return 0;
	
}

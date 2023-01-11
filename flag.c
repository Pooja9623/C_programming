#include<stdio.h>

void check_flag(int n, int *p, int *q, int *r)
{int i;
   if(n%2==0)  *p = 1;
   for(i=2; i<n; i++)
   {
   	 if(n%i==0) break;
   }
	if(i==n) *q = 1;
	
    if(n%3==0 || n%7==0)  *r = 1;
	 
}

int main()
{
	int n, f1=0, f2=0, f3=0;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
    check_flag(n,&f1,&f2,&f3);
    if(f1==1) printf("%d is even.\n",n);
    if(f2==1) printf("%d is prime.\n",n);
    if(f3==1) printf("%d is divisible by 3 or 7.\n",n);
    return 0;
}

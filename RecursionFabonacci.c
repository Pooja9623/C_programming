#include<stdio.h>

int fab(int n)
{
	if(n==2 || n==1) return 1;
	else if(n>2) return fab(n-1)+fab(n-2);
	else return 0;
}

int main()
{
	int n;
	printf("Enter no. of terms:");
	scanf("%d",&n);
	
	printf("%d Fabonacci number is %d",n,fab(n));
	return 0;
}

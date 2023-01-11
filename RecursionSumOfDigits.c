#include<stdio.h>

int sum(int n)
{
	if(n<10) return n;
	else  return n%10+sum(n/10);
	
}

int main()
{
	int n;
	printf("Enter an integer ");
	scanf("%d",&n);
	
	printf("Sum of digits=%d",sum(n));
	return 0;
}

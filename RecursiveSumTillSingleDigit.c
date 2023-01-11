/****Tail Recursion******/

#include<stdio.h>

int sum(int n)
{
	if(n<10) return n;
	else  return n%10+sum(n/10);	
}

int sum_single(int n)
{
	int s;
	if(n<10) return n;
	else {
		s =sum(n);
		return sum_single(s);
	}
}

int main()
{
	int n;
	printf("Enter an integer ");
	scanf("%d",&n);
	
	

	printf("Sum = %d",sum_single(n));
	return 0;
}

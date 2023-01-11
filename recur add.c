#include<stdio.h>

int s_o_d(int n)
{
	if(n<10) return n;
	else return ((n%10)+s_o_d(n/10));
}

int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("Sum of digits in %d is %d",n,s_o_d(n));
	
	return 0;

}

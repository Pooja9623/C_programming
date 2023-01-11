#include<stdio.h>

void check_flag(int n, int *f1, int *f2, int *f3)
{   int i=2;
	if(n%2==0) *f1=1;
	
	for(i; i<n; i++)
	{
		n%i==0;
		break;
	}
	if(i==n) *f2=1;
	
	if(n%3==0 || n%7==0) *f3=1;
}

int main()
{
	int N, F1=0, F2=0, F3=0;
	printf("Enter an Integer:");
	scanf("%d",&N);
	
	check_flag(N, &F1, &F2, &F3);
	
	if(F1) printf("%d is even.\n",N);
	if(F2) printf("%d is prime.\n",N);
	if(F3) printf("%d is divisible by 3 or 7.\n",N);
	
	return 0;
	
}

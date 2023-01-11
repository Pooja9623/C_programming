#include<stdio.h>

void rec_print(int n)
{
	if(n<10) printf("%d",n);
	else
	{  printf("%d\t",n%10);
	   rec_print(n/10);
	}
}

int main()
{
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	
	rec_print(n);
	
	return 0;
}

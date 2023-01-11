#include<stdio.h>

int power(int x,int y)
{
	if(y==0) return 1;
	else return x*power(x,y-1);
}

int main()
{
	int x,y;
	printf("Enter x and y:");
	scanf("%d %d",&x,&y);
	
	printf("%d raise to %d is %d",x,y,power(x,y));
	
	return 0;
}

#include<stdio.h>

int power(int x, int y)
{
	if(y==0) return 1;
	else return (x * power(x, y-1));
}

int main()
{
	int x, y;
	printf("Enter the values of x and y:");
	scanf("%d %d",&x,&y);
	
	printf("pow(%d, %d)= %d",x,y,power(x, y));
	
	return 0;
}

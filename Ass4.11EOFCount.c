#include<stdio.h>

int main()
{
	char ch;
	int alpha=0, digits=0;
	
	while((ch=getchar())!=EOF)
	{
		if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
		{
		  alpha++;
		}
		if(ch>='0' && ch<='9')
		{
			digits++;
		}
	}
	
	printf("Count of alphabets = %d\nCount of digits = %d",alpha,digits);
	return 0;
}


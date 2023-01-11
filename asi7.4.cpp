#include<stdio.h>
#include<ctype.h>

int check(char ch)
{
	if(isalpha(ch))
	 return 1;
	if(isdigit(ch))
	 return 2;
	if(ispunct(ch))
	 return 3;
	return 0;
}

int main()
{
	int alpha=0, digits=0, spec=0;
	char ch;
	
	while((ch=getchar())!=EOF)
	{
		int t = check(ch);
		if(t==1) alpha++;
		else if(t==2) digits++;
		else if(t==3) spec++;
	}
	
	printf("Alphabets = %d\nDigits = %d\nSpecial symbol = %d",alpha,digits,spec);
	

	return 0;
}



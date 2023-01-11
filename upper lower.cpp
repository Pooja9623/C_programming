#include<stdio.h>
#include<math.h>

int main()
{
	char ch;
	
	printf("Enter a charachter:");
	ch = getchAR();
	
	if(isalpha(ch))
	{
		if(isupper(ch))
		{
			printf("%c is upper case alphabet.\n",ch);
			printf("Lower case of %c is %c",ch, tolower(ch));
		}
		else
		{
			printf("%c is lower case alphabet.\n",ch);
			printf("Upper case of %c is %c",ch, toupper(ch));
		}
	}
	else if(isdigit(ch))
	{
		printf("%c is a digit",ch);
	
	}
	else if(ispunct(ch))
	{
		printf("%c is a punctuation",ch);
	}
	
	return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	
	printf("Enter a string: ");
	scanf("%[^\n%c]s",s);
	
	printf("string: %s\n",s);
	printf("string: %s\n",);
	
}

#include<stdio.h>

int main()

{
	char ch;
	
	printf("Enter a character ch:");
	scanf("%c",&ch);
	
	printf("The previous character is %c \nThe next character is %c ",ch-1,ch+1);
	
	return 0;
	
}

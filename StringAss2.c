#include<stdio.h>

int search(char s[],char x)     // search(char *s, n)
{
	int i;
	
	for(i=0; s[i]!='\0'; i++)   //for(i=0; s[i]!=0; i++) not..s[i]!='0' it takes askii value of 0 ...48
	{
		if(s[i]==x)
		return i;
		
	}
	return -1;
	
}
int main()
{
	char s1[30], x, ch;
	int i;
	
	printf("Accept a string:");
	scanf("%s",s1);
	
	do
	{
	printf("Enter character to search:");
	getchar();
	x = getchar();
	
	i = search(s1, x);
	
	if(i==-1)
	printf("%c not found.",x);
	else
	printf("First occurence of %c found at position %d.\n",x,i);
	
	getchar();
	printf("Search again? Y/N ");
	ch = getchar();
	}while(ch=='Y');
	
	
	
	
	return 0;
}

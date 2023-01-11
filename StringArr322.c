#include<stdio.h>

int is_palindrome(char s[])
{
	int i,j;
	
	j=0;
	while(s[j]!='\0')
		j++;
		
	j--;
	i=0;
	while(i<j)
	{
		if(s[i]!=s[j])
			return 0;
		
		i++;
		j--;
		
	}
	return 1;
}

int main()
{
	char s[20];
		printf("Enter a string:");
	     scanf("%s", s);
	/*     
	if(is_palindrome(s)==1)
	 printf("%s is a palindrome.",s);
	else
     printf("%s is not a paindrome.",s);*/

		int i,j;
		j=0;
		while(s[j]!='\0')
		j++;
		
		/*for(j--,i=0; i<j && s[i]==s[j]; i++,j--)*/
		j--;
		for(i=0;i<=j;i++,j--)
	{
		if(s[i]!=s[j]){
			
		printf("%s is not a palindrome.",s);
			return 0;
		}
	}
	printf("%s is a palindrome.",s);
	
	return 0;
}

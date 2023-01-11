#include<stdio.h>
#include<string.h>

int main()
{
	char s1[20], s2[20];
	
	printf("Enter a string:");
	scanf("%s", s1);
	
	strcpy(s2,s1);
    strrev(s1);
    
    if(strcmp(s1,s2)==0)
    printf("%s is a palindrome.",s1);
    else
    printf("%s is not a palindrome.",s2);
    
    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100], s2[100];
	int ch;
	do
	{
		printf("1.Length\n2.Copy\n3.Concatenation\n4.Compare\n5.Exit\n");
		printf("Enter your choice(1-5):");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter a string:");
				scanf("%s", s1);
				printf("Length = %d\n",strlen(s1));
				break;
				
			case 2:
				printf("Enter a string:");
				scanf("%s", s1);
				
				strcpy(s2,s1);
				printf("Copied string: %s\n",s2);
				break;
				
			case 3:
				printf("Enter string 1:");
				scanf("%s", s1);
				printf("Enter string 2:");
				scanf("%s", s2);
				
				strcat(s1,s2);
				printf("Concatenated string: %s\n",s1);
				break;
				
			case 4:
				printf("Enter string 1:");
				scanf("%s", s1);
				printf("Enter string 2:");
				scanf("%s", s2);
				
				if(strcmp(s1,s2)==0)
				 printf("%s is equal to %s\n",s1,s2);
				else if(strcmp(s1,s2)<0)
				 printf("%s is before %s\n",s1,s2);
				else
				 printf("%s is after %s\n",s1,s2);
				
				break;
					
		}
	}while(ch!=5);
	
	return 0;
}

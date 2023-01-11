#include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = "Ram";
	
	printf("%d %d\n",sizeof(str), strlen(str));
	
	char str1[] = "Ram Sam";
	
	printf("%d %d\n",sizeof(str1), strlen(str1));
	
	char str3[20];
	scanf("%s", str3);
	printf("%s",str3);
	
	
	char str4[20];
	char get(str4);
	int i;
	
	for(i=0; i<strlen(str4);i++)
	 printf("%c %c %c",str4[i],i[str4],*(str4+i));
	
	printf("%s",str4);
	
	return 0;
}

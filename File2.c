#include<stdio.h>

int main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("test.txt","r");
	
	if(fp==NULL)
	{
		printf("File not found.\n");
		return 0;
	}
	
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch, stdout);
	}
	
	fclose(fp);
	return 0;
}

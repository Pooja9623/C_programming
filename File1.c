#include<stdio.h>

int main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("test.txt","w");
	
	while((ch=fgetc(stdin))!=EOF)
	{
		fputc(ch, fp);
	}
	
	fclose(fp);
	return 0;
}

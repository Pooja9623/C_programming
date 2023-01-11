#include<stdio.h>

int main()
{
	FILE *fp, *fp2;
	char ch;
	
	fp = fopen("test.txt","r");
	fp2 = fopen("test1.txt","w");
	
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch, fp2);
	}
	
	fclose(fp2);
	
	return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char buff[100];
	
	//fp = fopen("test.txt","r");
	fp = fopen("File4.c","r");
	
	while(fgets(buff, 100, fp)!=NULL)
	{
	 
	 fputs(buff, stdout);
	}
		
	fclose(fp);
	
	return 0;
}

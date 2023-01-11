#include<stdio.h>

typedef struct products
{
	int pid;
	char name[20];
	float price;
}PROD;

int main()
{
	PROD p;
	FILE *fp;
	
	fp = fopen("Products.txt","rb");
	
	while(fread(&p, sizeof(p), 1, fp)>0)
	{
		//printf("Enter product id, name & price: ");		
		//fwrite(&p, sizeof(p), 1, stdout);
		printf("%4d %20s %9.2f\n",p.pid,p.name,p.price);
		
	}
	
	fclose(fp);
	return 0;
}

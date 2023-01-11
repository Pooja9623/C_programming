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
	
	fp = fopen("Products.txt","ab");
	
	while(1)
	{
		printf("Enter product id, name & price: ");
		scanf("%d %s %f",&p.pid, p.name, &p.price);
		
		if(p.pid<=0) break;
		
		fwrite(&p, sizeof(p), 1, fp);
		
	}
	
	fclose(fp);
	return 0;
}

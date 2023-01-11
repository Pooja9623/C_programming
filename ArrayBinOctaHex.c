#include<stdio.h>

void to_binary(int n)
{
	int bin[100],i=0;
	
	while (n>0)
	{
		bin[i++]=n%2;
		n/=2;
	}
	
	printf("Binary: ");
	while(--i>=0)
	{
		printf("%d",bin[i]);
	}
	
	printf("\n");
	
}

void to_Octal(int n)
{
	int oct[100],i=0;
	
	while (n>0)
	{
		oct[i++]=n%8;
		n/=8;
	}
	
	printf("Octal: ");
	while(--i>=0)
	{
		printf("%d",oct[i]);
	}
	
	printf("\n");
	
}

void to_hexadecimal(int n)
{
	int hex[100],i=0;
	
	while (n>0)
	{
		hex[i++]=n%16;
		n/=16;
	}
	
	printf("Hexadecimal: ");
	while(--i>=0)
	{	if(hex[i]<10)
		printf("%d",hex[i]);
		else 
		printf("%c",hex[i]+55);
	}
	
	printf("\n");
	
}

int main()
{
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	
	to_binary(n);
	to_Octal(n);
	to_hexadecimal(n);
	
	return 0;
}

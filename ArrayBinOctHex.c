#include<stdio.h>

void to_binary(int n)
{
	int a[100],j=0;
	 while(n>0)
	{
		a[j++] = n%2;
		n /= 2;
	}
	
	printf("Binary:");
	while(--j>=0)
		printf("%d",a[j]);
     printf("\n");	
}

void to_octal(int n)
{
	int a[100],j=0;
	 while(n>0)
	{
		a[j++] = n%8;
		n /= 8;
	}
	
	printf("Octal:");
	while(--j>=0)
		printf("%d",a[j]);
	printf("\n");
}

void to_hexadecimal(int n)
{
	int a[100],j=0;
	 while(n>0)
	{
		a[j++] = n%16;
		n /= 16;
	}
	
	printf("Hexadecimal:");
	while(--j>=0)
	if(a[j]<10)
		printf("%d",a[j]);
	else 
		printf("%c",a[j]+55);	
	printf("\n");
}

int main()
{	
    int n;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	
	to_binary(n);
	to_octal(n);
	to_hexadecimal(n);
	
	return 0;

}

/* display(int a[], int n)
{
	void
	int i;
	
	for(i=n-1; i>=0; i--)
	{
		printf("%4d",a[i]);
	}
}
*/

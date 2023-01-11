#include<stdio.h>

void accept(int a[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{	printf("[%d] = ",i);
		scanf("%d",&a[i]);
		//scanf("%d",a+i);
	}
}

int linear_search(int a[], int n, int key)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		if (a[i]==key) return i;
	}
	return -1;
}

int main()
{
	int b[100],n,key,p;
	char ch;
	
	printf("Enter no of elements:");
	scanf("%d", &n);
	
	accept(b, n);
	
	do
	{
		printf("Enter key to search:");
		scanf("%d",&key);
		
		p = linear_search(b, n, key);
		if(p==-1)
			printf("%d not found.\n",key);
		else
			printf("%d found at position %d.\n",key,p);
		
		printf("Continue Y/N? ");
		getchar();
		ch = getchar();
		
	} while(ch=='Y');
	
	return 0;
}

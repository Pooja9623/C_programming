#include<stdio.h>

 accept(int a[], int n)
{
	int i=0;
	for(i;i<n;i++)
	{
		printf("[%d]:",i);
		scanf("%d",&a[i]);
	}
}

void display(int a[], int n)
{
	intvoid i=0;
	for(i;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void sort(int a[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}
}

void merge(int p[], int n, int q[], int m, int r[])
{
	int i=0,j=0,k=0;
	
	while(i<n && j<m)
	{
		if(p[i]<=q[j]) {
		 r[k++]=p[i++];
		 
	   } else r[k++]=q[j++];
	}
	
	while(i<n)
	{
		r[k++]=p[i++];
	}
	
	while(j<m)
	{
		r[k++]= q[j++];
	}
}

int main()
{
	int n,m, a[100], b[100],c[100];
	printf("Enter no. of elements in a[]");
	scanf("%d",&n);
	
	accept(a,n);
	sort(a,n);
	
	printf("Enter no. of elements in b[]");
	scanf("%d",&m);
	
	accept(b,m);
	sort(b,m);
	
	printf("\n");
	
	display(a,n);
	printf("\n");
	
	display(b,m);
	printf("\n");
	
	merge(a,n,b,m,c);
	display(c,(m+n));
	
	
	return 0;
}

#include<stdio.h>

void accept(int a[], int n)
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
	int i=0;
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

int binary_Search(int a[],int low, int high, int key)
{
	int mid = (low+high)/2;
	if(low>high) return -1;
	if(a[mid]==key) return mid;
	else if(a[mid]<key) return binary_Search(a,mid+1,high,key);
	else return binary_Search(a,low,mid-1,key);
}

int main()
{
	int a[100],n,k,p;
	char ch;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	accept(a,n);
	sort(a,n);
	display(a,n);
	
	do{
	printf("Enter element to search:");
	scanf("%d",&k);
	
	p= binary_Search(a,0,n-1,k);
	if(p==-1) printf("%d not found.",k);
	else printf("%d found at position %d",k,p+1);
	getchar();
	 printf("\nContinue-Y/N?");
	 ch=getchar();
	} while(ch=='Y');
	return 0;
}

#include<stdio.h>

//Sorting of array using Bubble sort method.

void accept(int a[],int n)
{
	int i=0;
	for(i;i<n;i++)
	{
	 printf("[%d]:",i);	
	 scanf("%d",(a+i));
	}
}

void display(int a[], int n)
{
	int i=0;
	for(i;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

void bubble_sort(int a[],int n)
{int i,j;
  for(j=1;j<n;j++)
	for(i=0;i<n-j;i++)
	{int k;
		if(a[i]>a[i+1])  {
			k=a[i+1];
			a[i+1]=a[i];
			a[i]=k;
		}
	}
}


int main()
{
	int n;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	int a[n];
	
	accept(a,n);
	printf("\nBefore:\n");
	display(a,n);
	printf("\n");
	bubble_sort(a,n);
	printf("\nAfter:\n ");
	display(a,n);
	//inplace array    Sorting wothin itself.
	return 0;
}

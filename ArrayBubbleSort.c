#include<stdio.h>
/*sorting is a process of arranging elements in a list either in ascending or descending order
	a1 <= a2 <= a3 <=..... <= an
	
	a1 >= a2 >= a3 >=..... >= an
*/
void accept(int a[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{	printf("[%d] = ",i);
		//scanf("%d",&a[i]);
		scanf("%d",a+i);
	}
}

 display(int a[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
}

void bubble_sort(int a[],int n)
{	
    int i,j;
    for(j=0; j<n-1; j++)
	{
	
		for(i=0; i<n-1-j; i++)
		{
			if(a[i]>a[i+1])
			{
				int t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
}


int main()
{	
	int b[100],n;
	
	printf("Enter no. of elements:");
	scanf("%d",&n);
	
	accept(b, n);
	
	display(b, n);
	
	bubble_sort(b, n);
	
	display(b, n);
	
	return 0;
}





#include<stdio.h>

int search(int a[], int n,int key )
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key) return i;
	}
	return -1;
}

int accept(int a[],int n)
{int i,j=0,e;
	for(i=0;i<n;i++){
	printf("Enter element: ");
	scanf("%d",&e);
	
	if(search(a,j,e)==-1) a[j++]=e;	
  }
  return j;
}

void display(int b[],int n)
{int i=0;
printf("{");
for(i=0;i<n;i++)
printf("%d,",b[i]);

printf("\b}\n");
	
}

int intersection(int p[], int m, int q[], int n, int r[])
{
	int i,j=0;
	for(i=0;i<m;i++)
	{
		if(search (q,n, p[i])!=-1)
	    r[j++] = p[i];
	}
	
	return j;	
}

int main()
{
	int a[100],b[100],c[100],n1,n2,n3;
	
	printf("Enter no. of elements in set 1:");
	scanf("%d",&n1);
	
	n1=accept(a,n1);

	printf("Enter no. of elements in set 2:");
	scanf("%d",&n2);
	
	n2=accept(b,n2);
	
	n3 = intersection(a,n1, b,n2, c);
	
	display(a,n1);
	display(b,n2);
	display(c,n3);	
	
}

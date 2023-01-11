#include<stdio.h>

void accept(int a[][10],int m, int n)  //int (*a)[10]
{int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("[%d][%d]",i,j);
		scanf("%d",&a[i][j]);  //&*(*(a+i)+j)------*(a+i)+j
		}
	}
	
}

void display(int a[][10], int m , int n)
{int i,j;
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%4d",a[i][j]);
	}
	printf("\n");
}
}

void transpose(int c[][10],int (*b)[10],int m, int n)
{int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		  b[j][i]=c[i][j];
		}
	}
	
}

	

int main()
{  int a[10][10],b[10][10], m,n;
printf("Enter size of array(m x n):");
scanf("%d %d",&m,&n); 

accept(a,m,n);
display(a,m,n);
transpose(a,b,m,n);
printf("\n");
display(b,n,m);


return 0;	
}

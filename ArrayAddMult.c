#include<stdio.h>

void Accept(int a[][10],int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void Display(int a[][10],int m,int n)
{
		int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void Add(int a[][10], int b[][10],int c[][10],int m,int n)
{
			int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j]+b[i][j];
		}
	}
}

void Multiply(int a[][10],int b[][10],int c[][10],int m,int n,int p)
{
	int i,j,k,s;
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			s=0;
			for(k=0;k<n;k++)
			{
				s += a[i][k]*b[k][j];
			}
			c[i][j]=s;
		}
	}
}

int main()
{int a[10][10], b[10][10], c[10][10],m,n,m1,n1;
do{
  printf("Enter size of Matrix 1:");
  scanf("%d %d",&m,&n);
  printf("Enter size of Matrix 2:");
  scanf("%d %d",&m1,&n1);
 }while(m!=m1 || n!=n1);
  printf("\nEnter matrix A:\n");
  Accept(a,m,n);
 printf("\nEnter matrix B:\n");
  Accept(b,m1,n1);  
  Add(a,b,c,m,n);
  
   printf("\nMatrix A:\n");
  Display(a,m,n);
   printf("\nMatrix B:\n");
  Display(b,m1,n1);
  printf("Addition of both matrix:\n");
  Display(c,m,n);
  
  do{
  printf("Enter size of Matrix 1:");
  scanf("%d %d",&m,&n);
  printf("Enter size of Matrix 2:");
  scanf("%d %d",&m1,&n1);
 }while(n!=m1);
 
 printf("\nEnter matrix A:\n");
  Accept(a,m,n);
 printf("\nEnter matrix B:\n");
  Accept(b,m1,n1);
    printf("\nMatrix A:\n");
  Display(a,m,n);
   printf("\nMatrix B:\n");
  Display(b,m1,n1);
  printf("Multiplication of both matrix:\n");
  Multiply(a,b,c,m,n,n1);
  Display(c,m,n1);
	
	
	return 0;
}

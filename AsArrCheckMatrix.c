void accept(int a[][10], int n)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);	
		}
	}printf("\n");
}

void display(int a[][10], int n)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%4d",a[i][j]);	
		}
	}
	printf("\n");
}


int is_symmetric(int a[][10], int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i][j]!=a[j][i]) return 0;
		}
	}
	return 1;
}


void trace(int a[][10], int n)
{
	int i,s;
	s=0;
	for(i=0; i<n; i++)
	{
		s += a[i][i] + a[i][n-1-i];
	}
	if(n%2==0)
	{
		printf("Sum of major diagonal elements: %d\n",s);
	}
	else
	{
		printf("Sum of major diagonal elements: %d\n",s-a[n/2][n/2]);
		s=0;
		for(i=0; i<n; i++)
		{
			s += a[n/2][i] + a[i][n/2];
		}
		printf("Sum of minor diagonal elements: %d\n",s-a[n/2][n/2]);
	}
}

int is_upper(int a[][10],int n)
{
	int i,j;
	for(i=1; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			if(a[i][j]!=0) return 0;
		}
	}
	return 1;
}

int is_lower(int a[][10],int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i][j]!=0) return 0;
		}
	}
	return 1;
}

int is_identity(int a[][10], int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))  return 0;
		}
	}
	return 1;
}

int main()
{
	int A[10][10],n, ch;
	
	do
	{
		printf("1.Accept\n");
		printf("2.Display\n");
		printf("3.Symmetric\n");
		printf("4.Trace\n");
		printf("5.Upper triangular\n");
		printf("6.Lower triangular\n");
		printf("7.Identity\n");
		printf("8.Exit\n");
		printf("Enter your choice (1-8):");
		scanf("%d",&ch);
		
		switch(ch)
		{
		case 1:
			printf("Enter order of matrix:");
			scanf("%d",n);
			accept(A, n);
			break;
		case 2:
			display(A, n);
			break;
		case 3:
			printf(is_symmetric(A, n)?"Symmetric\n":"Not Symmetric\n");
			break;
		case 4:
			trace(A, n);
			break;
		case 5:
			printf(is_upper(A, n)?"Upper triangular\n":"Not Upper triangular\n");
			break;
		case 6:
			printf(is_lower(A, n)?"Lower triangular\n":"Not Lower triangular\n");
			break;
		case 7:
			printf(is_identity(A,n)?"Identity\n":"Not Identity\n");
			break;
			
		}
	} while(ch!=8);
	return 0;
}

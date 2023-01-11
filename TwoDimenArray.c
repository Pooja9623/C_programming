#include<stdio.h>

int main()
{
	int m,n,i,j;
	printf("Enter no. of rows & cols.(m x n):");
	scanf("%d %d",&m,&n);
	
	int a[m][n],sum,s=0;
	
	for(i=0; i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0; i<m;i++){
		sum=0;
		for(j=0;j<n;j++){
			printf("%3d",a[i][j]);
			sum+=a[i][j];
		}
		printf("%3d",sum);
		s+=sum;
		printf("\n");
	}
	
	for(j=0; j<n;j++){
		sum=0;
		for(i=0;i<m;i++){
		sum+= a[i][j];			
		}
			printf("%3d",sum);
	}
	printf("%3d",s);
	
	return 0;
}

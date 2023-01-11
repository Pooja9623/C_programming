#include<stdio.h>

void accept(int b[],int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("b[%d]: ",i);
		scanf("%d",&b[i]);
	}
}

int search(int b[],int n,int m)
{	int i,j=0;
	for(i=0;i<n;i++){
		if(b[i]==m) j++;
	}
	if(j>0) return j;
	else return -1;
}

void display(int b[],int n)
{int i;
	for(i=0;i<n;i++){
		printf("b[%d] = %d\n",i,*(b+i));
	}
}

void display_reverse(int b[],int n)
{
	int i;
	for(i=n-1;i>=0;i--){
	printf("\nb[%d] = %d",i,*(b+i));
	}
}

int main()
{
	int m,p,n,a[100];
	printf("Enter the size of a[] ");
	scanf("%d",&n);
	
	accept(a,n);
//	display(a,n);
//	display_reverse(a,n);
printf("Enter no to search: ");
scanf("%d",&m);

p=search(a,n,m);
if(p==-1) printf("%d not found.",m);
else printf("%d found %d times.",m,p);
	
	return 0;
	
}

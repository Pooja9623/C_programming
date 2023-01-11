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
{
	int i;
	for(i=0;i<n;i++){
		if(b[i]==m) return i;
	}
		return -1;
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
	int m,n,p,a[100];
	char ch;
	printf("Enter the size of a[] ");
	scanf("%d",&n);
	
	accept(a,n);
//	display(a,n);
//	display_reverse(a,n);
do{
printf("Enter no to search: ");
scanf("%d",&m);
p = search(a,n,m);

if(p==-1) printf("%d not found.",m);
else printf("%d found at position %d.",m,p);

printf("\nDo you want to continue? Y/N:");
getchar();
scanf("%c",&ch);

}while(ch=='Y');
	
	return 0;
	
}

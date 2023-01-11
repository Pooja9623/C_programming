#include<stdio.h>

void display(char ch,int n)
{int i;
	 for(i=1;i<=n;i++)
	printf("%c ",ch+i);
}

int main()

{
char ch;
int n;

 printf("enter a character an number");
 scanf("%c %d",&ch,&n);
 display(ch,n);


return 0;
}




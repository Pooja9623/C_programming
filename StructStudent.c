//menu driven program to display all student details modify greater then percentage student details

#include<stdio.h>

typedef struct student
{
	int rno;
	char name[20];
	int m1, m2, m3;
	float per;
} STUD;

void accept(STUD s[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter roll no, name & 3 subject marks:");
		scanf("%d %s %d %d %d",&s[i].rno, s[i].name, &s[i].m1, &s[i].m2, &s[i].m3);
		s[i].per = (s[i].m1+s[i].m2+s[i].m3)/3.0;
	}
}

void disp_all(STUD s[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
	
		printf("%4d %20s %5d %5d %5d %9.2f\n",s[i].rno, s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].per);
	}
}

void disp_per(STUD s[], int n, float p)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(s[i].per > p)
	    	printf("%4d %20s %5d %5d %5d %9.2f\n",s[i].rno, s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].per);
	}
}

void disp_per_max(STUD s[], int n)
{
	int i;
	float p = -9999;
	
	for(i=0; i<n; i++)
	{
		if(s[i].per > p)
		p = s[i].per;	
	}
	
	for(i=0; i<n; i++)
	{
		if(s[i].per == p)
    	   	printf("%4d %20s %5d %5d %5d %9.2f\n",s[i].rno, s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].per);
	}
}

int search(STUD s[], int n, int no)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(s[i].rno == no)
	    	return i;
	}
	return -1;
}

void modify(STUD s[], int n, int no)
{
	int i;
	
	i = search(s, n, no);
	if(i == -1)
	{
		printf("Roll no %d not found.",no);
		return;
	}
	
	printf("%4d %20s %5d %5d %5d %9.2f\n",s[i].rno, s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].per);
	
	printf("Enter new roll no, name & 3 subject marks:");
	scanf("%d %s %d %d %d",&s[i].rno, s[i].name, &s[i].m1, &s[i].m2, &s[i].m3);
		
	s[i].per = (s[i].m1 + s[i].m2 + s[i].m3)/3.0;
	return;
	
	
}

int main()
{	int n,ch,no,i;
	float p;
	STUD a[20];
	
	printf("Enter number of students:");
	scanf("%d",&n);
	
	accept(a, n);
	do
	{
		printf("1.Search \n2.Modify \n3.Display all student details \n4.Display percentage \n5.Display student having maximum percentage \n6.Exit \nEnter your choice:");
    	scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:
			printf("Enter roll no to search:");
			scanf("%d",&no);
			i = search(a, n, no);
			if(i == -1)
			  printf("Roll no %d not found.\n",no);
			else
			  printf("Roll no %d found at position %d.\n",no,++i);
			break;
			
			case 2:
			printf("Enter roll no to modify:");
			scanf("%d",&no);
			modify(a, n, no);
			break;
			
			case 3:
			disp_all(a, n);
			break;
			
			case 4:
			printf("Enter percentage:");
			scanf("%f",&p);
			disp_per(a, n, p);
			break;
		
			case 5:
			disp_per_max(a, n);
			break;
		}
	}while(ch!=6);
	
	return 0;
}



#include<stdio.h>
#include<string.h>

struct stud
{
	int rno;
	char name[20];
	float per;
} s1={45,"Asha",55.7};

int main()
{
	struct stud s2 = {56,"Riya", 65.2};
	struct stud s3, s4;
	
	s3.rno = 55;
	strcpy(s3.name,"Laxman");
	s3.per = 58.4;
	
	printf("Enter roll no , name & percentage:");
	scanf("%d %s %f", &s4.rno,s4.name,&s4.per);
	
	printf("%d %s %f\n",s1.rno,s1.name,s1.per);
	printf("%d %s %f\n",s2.rno,s2.name,s2.per);
	printf("%d %s %f\n",s3.rno,s3.name,s3.per);
	printf("%d %s %f\n",s4.rno,s4.name,s4.per);
	
	return 0;
}



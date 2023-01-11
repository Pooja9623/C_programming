#include<stdio.h>

int main()
{
	int rno;
	char name[20];
	float per;
	FILE *fp;
	
/*	fp = fopen("student.txt","w");
	
	while(1)
	{
		printf("Enter roll no, name & percentage:");
		fscanf(stdin, "%d %s %f", &rno, name, &per);
		if(rno<=0) break;
		fprintf(fp, "%4d %20s %9.2f\n",rno, name, per);
	}    */
		fp = fopen("student.txt","r");
	
	while(fscanf(fp, "%d %s %f", &rno, name, &per)!=EOF)
	{
    	//	printf("Enter roll no, name & percentage:");
		
		//if(rno<=) break;
		fprintf(stdout, "%4d %20s %9.2f\n",rno, name, per);
	}   
	
	fclose(fp);
	
	return 0;
}

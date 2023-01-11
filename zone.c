#include<stdio.h>
int main()

{
	int i,j;
	float A,s;
	
	for(i=1;i<=4;i++)
	{
	
		printf("Zone %d\n",i);
		for(j=1,A=0;j<=4;j++)
		{
			printf("Enter sales of quarter %d: ",j);
			scanf("%f",&s);
			A+=s;
		}
		printf("Average sales of zone %d =%.2f\n\n",i,A/4);
	}
	return 0;
	
}

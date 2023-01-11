#include<stdio.h>

void incr_time(int *hp, int *mp , int *sp, int *s)
{
	*sp = *sp + *s;
	*mp = *mp + *sp/60;
	*sp = *sp%60;
	*hp = *hp + *mp/60;
	*mp = *mp%60;
}

int main()
{
	int hh,mm,ss,s;
	printf("Enter hours, minutes, seconds :");
	scanf("%d:%d:%d",&hh,&mm,&ss);
	printf("enter no. to be added");
	scanf("%d",&s);
	
	incr_time(&hh, &mm, &ss, &s);
	printf("Incremented time is %d:%d:%d",hh,mm,ss);
	return 0;
}


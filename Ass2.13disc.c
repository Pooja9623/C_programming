#include<stdio.h>

int main()

{
	int q1,q2,q3,r1,r2,r3,amt;
	double d,final;
	
	printf("Enter quantity and rate of first item:");
	scanf("%d %d",&q1,&r1);
	
	printf("Enter quantity and rate of second item:");
	scanf("%d %d",&q2,&r2);
	
	printf("Enter quantity and rate of third item:");
	scanf("%d %d",&q3,&r3);
	
	amt = q1*r1 + q2*r2 + q3*r3;
	
	if(amt>5000)
	{
	    d = amt * 20 / 100;
	    printf("The discount is Rs.%.2f",d);
	}
	else if(amt<5000 || 3000<=amt)
	{
		d = amt * 15 / 100;
		printf("The discount is Rs.%.2f",d);
	}
	else if(1000<=amt || amt>3000)
	{
		d = amt * 8 / 100;
		printf("The discount is Rs.%.2f",d);
	}
	else
	{
		printf("No discount");
	}
	return 0;
}

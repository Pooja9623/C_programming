#include<stdio.h>
#include<math.h>
int main()

{
	int a,b,c;
	double d;
	
	
	
	printf("entre three coefficient;");
	scanf("%d %d %d",&a,&b,&c);
	
	d=(b*b)-(4*a*c);
	
	if(d==0)
	{
		double x1= (double)(-b)/(2*a);
		printf("x1=x2=%.2f",x1); 
	}
     else if(d>0)	
	{
		double x1=((double)(-b)+sqrt(d))/(2*a);
		double x2=((double)(-b)-sqrt(d))/(2*a);
		
		printf("x1=%.2f\nx2=%.2f",x1,x2);
		
   	} else
	    {
	     double r=(-b)/(2*a);
         double i=sqrt(-d)/(2*a);	    
		 
		 printf("x1=%.2f+%.2fi\nx2=%.2f-%.2fi",r,i,r,i);
	    }  
		return 0;	
}

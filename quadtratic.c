#include<stdio.h>
#include<math.h>

int main()

{
	int a,b,c;
	double d;
	
	printf("enter the coefficient:");
	scanf("%d %d %d",&a,&b,&c);
	
	d=b*b-4*a*c;

      if(d==0)
      {
      	double x = (double)(-b)/(2*a);
      	printf("x1=x2=%.2f",x);
	  }
	  else if(d>0)
	  {
	  	double x1 =( (double)(-b)+sqrt(d))/(2*a);
	  	double x2 =( (double)(-b)-sqrt(d))/(2*a);
	  	
	  	printf("x1=%.2f\n x2=%.2f",x1,x2);
	  }
	  else
	  {
	  	float r,I;
	  	r=(double)(-b)/(2*a);
	  	I= sqrt(-d)/(2*a);
	  	
	  	printf("x1=%.2f+%.2fi\nx2=%.2f-%.2fi",r,I,r,I);
	  	
	  	
	  }
	
     return 0;
	
	}   
    


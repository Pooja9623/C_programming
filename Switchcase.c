#include<stdio.h>
#include<math.h>

int main()
{
	int ch;
	float x,y;
	
	do
	{
		printf("1.Power\n2.Square root\n3.Floor\n4.Ceiling\n5.Exit\n");
		printf("Enter your choice :",ch);
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter base(x) and exponent(y)");
				scanf("%f %f",&x, &y);
				printf("power(%f, %f)=%f\n",x,y,pow(x,y));
				break;
			case 2:
				printf("Enter value of x:");
				scanf("%f", &x);
				printf("sqrt(%f)=%f\n",x,sqrt(x));
				break;
			case 3:
				printf("Enter value of x:");
				scanf("%f", &x);
				printf("floor(%f)=%f\n",x,floor(x));
				break;
			case 4:
				printf("Enter value of x:");
				scanf("%f", &x);
				printf("ceiling(%f)=%f\n",x,ceil(x));
				break;
			
		} while(ch!=5)
	return 0;
    }
	
}

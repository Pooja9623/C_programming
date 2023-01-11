#include<stdio.h>

int main()
{
	int n,x=0,y;
	
	printf("Accept an integer:");
	scanf("%d", &n);
	
	while(n>0)
	{
		x = (x*10) + (n%10);
		n/=10;
	}
	//printf("x = %d\n",x);
	
	while(x>0)
	{
		n = (n*10) + (x%10);
		x/=10;
		
		y = n%10;
		switch(y)
		{
			case 0:
				printf("Zero-");
				break;
				
			case 1:
				printf("One-");
				break;
				
			case 2:
				printf("Two-");
				break;
				
			case 3:
				printf("Three-");
				break;
				
			case 4:
				printf("Four-");
				break;
				
			case 5:
				printf("Five-");
				break;
				
			case 6:
				printf("Six-");
				break;
				
			case 7:
				printf("Seven-");
				break;
			
			case 8:
				printf("Eight-");
				break;
			
			case 9:
				printf("Nine-");
				break;			
		}
		
	}
	printf("\b ");
	
	return 0;
}

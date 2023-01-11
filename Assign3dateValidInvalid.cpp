#include<stdio.h>

int main()
{   int d,m,y;
	printf("Enter date (dd-mm-yyyy):\n");
	scanf("%d-%d-%d",&d,&m,&y);
	switch (m)
	{
		case 4:
		case 6:
		case 9:
		case 11:
			if(d>=1 && d<=30)
			{
				printf("Valid");
			}
			else
			{
				printf("Invalid date");
			}
			break;
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(d>=1 && d<=31)
			{
				printf("Valid");
			}
			else 
				printf("Invalid");
				break;
		
		case 2:
			if((y%4==0 && y%100 != 0) || y%400 == 0)
			{
				if(d>=1 && d<=29)
					printf("Valid");
				else
					printf("Invalid");
			}
			else 
			{
			 	if(d>=1 && d<=28)
					printf("Valid");
				else
					printf("Invalid");
			}
			break;
		default:
			printf("Invalid");	
	 
	}
	 return 0;
}

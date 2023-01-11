#include<stdio.h>

int main()
{
	int x,y,z,n;
	printf("Enter two numbers:");
	scanf("%d %d",&x,&y);
	
	printf("1.Equality \n2.Less than \n3.Quotient & Remainder \n4.Range \n5.Swap \nEnter your choice(1-5):");
	scanf("%d",&n);
	do{
	
	
	switch(n)
	{
		case 1:
			if(x == y)
			{
			  printf("%d is equal to %d",x,y);
			}
			else
			printf("%d is not equal to %d",x,y);
			break;
			
		case 2:
			if(x<y)
			{
				printf("%d is less than %d",x,y);
			}
			else
				printf("%d is not less than %d",x,y);
			break;
		
		case 3:
			printf("Quotient = %d\nRemainder = %d",x/y,x%y);
			break;
			
		case 4:
			printf("Enter a number to check range:");
			scanf("%d",&z);
			
			if((z<=x && z>=y)  ||  (z>=x && z<=y))
				printf("%d is between %d & %d",z,x,y);
			else
				printf("%d is not between %d & %d",z,x,y);
			break;
			
		case 5:
			printf("Before swap: x = %d, y = %d\n",x,y);
			z = x;
			x = y;
			y = z;
			printf("After swap: x = %d, y = %d",x,y);
			z = x;
			x = y;
			y = z;
			break;
			
		default:
			printf("Invalid choice: %d\n",n);
			break;
	}
	printf("\nEnter your choice(1-5):");
	scanf("%d",&n);
 } while(n);
	
	return 0;
}

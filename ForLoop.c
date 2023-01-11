#include<stdio.h>

int main()
{
	int i=0;
	for(;;i++)
	{
		if(i>5){
			 break;
		}
		printf("i = %d\n",i);
		
	}
	
	printf("Done. %d",i);
}

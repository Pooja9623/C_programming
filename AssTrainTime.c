#include<stdio.h>

int main()
{
       //     am             kmph                min
       int A = 4, Am = 00, halt = 10,Amh,i=1;
	 float  speed_hr = 80, speed_min, B = 1,dis =0;
		B += 12;
	
	speed_min = speed_hr/60;
	
	printf("At Station %2d, Departure time = %d:%2d am \n",i++,A,Am);
	
	do	{
		
		Am += 30;
		dis += 30 * speed_min;
		A+=Am/60;
		if(A<12) printf("At Station %2d, Arrival time = %d:%2d am, ",i,A,Am%60 );
		else printf("At Station %2d, Arrival time = %d:%2d pm, ",i,A,Am%60 );
		if(Am + halt == 60)
		{
			A++;
		}
		Am =(Am + halt)%60;
		if(A>12) 
		{
		printf("\n");
		break;}
		if(A<=12)
		{
		printf("Departure time = %d:%2d am \n",A,Am%60);
	    }
	    else
	    {
	    printf("Departure time = %d:%2d pm \n",A-12,Am%60);	
		}
		i++;
	    
	}while(A<=B);
	
	printf("Total distance travelled = %.2f",dis);
	return 0;
}

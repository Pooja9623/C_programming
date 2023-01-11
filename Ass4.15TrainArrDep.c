#include<stdio.h>

int main()
{
	int hr,min,i=1,A=4,B=1;
	float speed=80,spm=speed/60,dis=0;
	B+=12;
	A*=60;
	B*=60;

	printf("At station %2d, Departure time = %2d:%2d am\n",i++,A/60,A%60);
	while(A<=B){
		A+=30;
		if(A>B) break;
		dis+=(spm*30);
		if(A<12*60)  printf("At station %2d, Arrival time = %2d:%2d am  ",i++,A/60,A%60);
		else printf("At station %2d, Arrival time = %2d:%2d pm  ",i++,A/60,A%60);
		
		A+=10;
		if(A<12*60)  printf("Departure time = %2d:%2d am\n",A/60,A%60);
		else printf("Departure time = %2d:%2d pm\n",A/60,A%60);
		
	}
	printf("Distance travelled = %.2f km",dis);
	
	return 0;
}

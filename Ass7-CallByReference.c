#include<stdio.h>

void add_secs(int *hr, int *min, int *sec, int s)
{
    *sec += s;
	*min += *sec/60;
	*sec = *sec%60;
	*hr += *min/60;
	*min = *min %60; 
}

int main()
{
	int hour, mins, secs,ss;
	printf("Enter time (hr:min:sec):");
	scanf("%d:%d:%d",&hour,&mins,&secs);
	
	printf("Enter secs to add:");
	scanf("%d",&ss);
	
	printf("Before: %d:%d:%d\n",hour, mins, secs);
	
	add_secs(&hour, &mins, &secs, ss);
	
	printf("Incremented value= %d:%d:%d",hour,mins,secs);
	
	return 0;
	
	
}

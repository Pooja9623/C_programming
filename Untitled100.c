#include<stdio.h>
#include<windows.h>

int main()
{	int h,m,s;
printf("Enter time: (hr:min:sec)");
scanf("%d:%d:%d",&h,&m,&s);

if(h>12||m>60||s>60)
{
	printf("Enter Valid Time!!");
	return 0;
}

while(1)
{
	s++;
	if(h>12) h=1;
	if(m>60){
		h++;
		m=0;
	}
	if(s>60){
		m++;
		s=0;
	}
	
}
	
	
	
	
	return 0;
}

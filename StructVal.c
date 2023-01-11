#include<stdio.h>

typedef struct point
{
	int x,y;
}POINT;

void change(POINT p, int t)
{
	p.x += t;
	p.x += t;
	
}

int main()
{
	POINT pt = {20, 45};
	
	printf("(%d, %d)\n",pt.x,pt.y);
	
	change(pt , 15);
	printf("(%d, %d)\n",pt.x,pt.y);
	
	return 0;
}

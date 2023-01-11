#include<stdio.h>
#include<ctype.h>

int check(char ch)
{
	if(isalpha(ch)) return 1;
	if(isdigit(ch)) return 2;
	if(ispunct(ch)) return 3;
	
	return 0;	
}

int main()
{
	char ch;
	int alp=0, dig=0, spe=0;
	while((ch=getchar())!=EOF)
	{
	/*if(check(ch)==1) alp++;
	if(check(ch)==2) dig++;
	if(check(ch)==3) spe++;*/
	switch(check(ch))
	 {
		case 1:
			alp++;
			break;
		case 2:
			dig++;
			break;
		case 3:
			spe++;
			break;
	 }	
    }
    
    printf("Alphabets = %d\nDigits = %d\nSpecial characters = %d",alp,dig,spe);
	return 0;
}

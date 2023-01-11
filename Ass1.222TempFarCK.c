#include<stdio.h>

int main()
{
	float F,C,K;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f",&F);
	C = 5.0/9.0 * (F-32);
	K = C + 273.15;
	
	printf("Temperature in Celsius:%.2fC \nKelvin:%.2fK",C,K);
	return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
	printf("%f %f\n", floor(2.123), ceil(2.123));
	
    printf("%f %f\n", floor(-2.123), ceil(-2.123));
    
    printf("%f %f %f %f %f %f\n", cos(30*3.14/180),asin(1), pow(2,9),exp(1), exp(2), pow(2.718282, 2));
    printf("%f %f %f %f %f\n",sqrt(170), cbrt(170), log(5), log2(32), log(32)/log(2));
    printf("%f %f",fabs(-5.6), fmod(5.2, 2));
    

	return 0;
}

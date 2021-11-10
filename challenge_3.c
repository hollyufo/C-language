#include <stdio.h>


int main(void) 
{
	
	unsigned int m;
	float km;
	float miles;

	printf("Enter Meters:");	
	scanf("%d",&m);
	
	km=m/1000.00;
	
	miles = km / 1.6;
	
	printf("%d meters equals : %.10f miles",m , miles);

	return 0;

}

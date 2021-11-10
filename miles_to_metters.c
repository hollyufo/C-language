#include <stdio.h>

int main(void) {
    float m;
    float km;
	float mile;

	printf("Please enter miles:");
	scanf("%f",&mile);

	km = mile * 1.6;
	
	m  = km * 1000.0;
	

	printf("%.3f miles is %f in meters", mile, m);
}
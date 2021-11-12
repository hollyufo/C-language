#include <stdio.h>
 
void main()
{
    float c;
    float f;
 
    printf("enter temperature in fahrenheit:");
    scanf("%f",&f);
 
    c=(f - 32)*5/9;
    printf("\nCelsius = %.2f",c);
}
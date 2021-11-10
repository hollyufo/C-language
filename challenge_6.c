#include <stdio.h>
int main()
{
    float c;
    float f;
    printf("enter temperature in celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("the temperature is  %.2f Fahrenheit", c);
    return 0;
}
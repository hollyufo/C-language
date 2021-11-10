#include <stdio.h>
#include <math.h>

int main(){
  
    int a;
    int b;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    float sum = (float) a + b;
    float sub = (float) a - b;
    float multi = (float) a * b;
    float dev = (float) a / b;
    float modul = a % b;
    printf("%d + %d = %.2f\n", a, b, sum);
    printf("%d - %d = %.2f\n", a, b, sub);
    printf("%d * %d = %.2f\n", a, b, multi);
    printf("%d / %d = %.2f\n", a, b, dev);
    printf(" modulus of %d and %d = %.2f\n", a, b, modul);
    return 0;
}
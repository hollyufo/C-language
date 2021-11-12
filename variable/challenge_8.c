#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;
    int d;
    int sum;
    int gen;
    printf("enter first value\n");
    scanf("%d",&a);
    printf("enter second value\n");
    scanf("%d",&b);
    printf("enter third value\n");
    scanf("%d",&c);
    printf("enter forth value\n");
    scanf("%d",&d);
    sum = a + b + c + d;
    gen = sum / 4;
    printf("the sum of all the values is %d \n", sum);
    printf("the medium of all the value is %d \n", gen);
    return 0;
}
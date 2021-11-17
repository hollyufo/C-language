#include<stdio.h>
#include<unistd.h>

int main()
{
   int num1, num2, num3;
   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);
   
   num3 = sum(num1, num2);
   printf("Sum of the entered numbers: %d", num3);
   return 0;
}
int sum(int a, int b){
   return a+b;
}
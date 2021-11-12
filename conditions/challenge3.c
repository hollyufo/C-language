#include <stdio.h>
 
int main()
{
   int x;
   
   printf("enter a number : ");
   scanf("%d", &x);
   
   if (x % 2 == 0)
      printf("%i is an even number\n", x);
   else
      printf("%i is an odd number\n", x);
     
   return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int a,b,c;
    int delta;
    float x1,x2;
     
    printf("enter A diff then  0: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Enter C: ");
    scanf("%d",&c);
    printf("you want to solve this equation %dx%c+%dx+%d=0\n",a,253,b,c);
    delta = b*b-4*a*c;
    printf("%c = %d\n",127,delta);
     
    if(delta<0)
    {
    printf("this equation does not have a solution\n");
    }
    else if(delta==0)
    {
    x1 = b/(-2*a);
    printf("equation has only one solution %.2f \n",x1);
    }
    else
    {
    x1= (-b-sqrt(delta))/2*a;
    x2= (-b+sqrt(delta))/2*a;   
    printf("equation has two solutions  %.2f et %.2f\n",x1,x2);
    }
     
  return 0;
}
#include<stdio.h>
#include<math.h>

int main(){
    int w;
    int h;
    int ci;
    printf("enter the width :");
    scanf("%d", &w);
    printf("enter the height : ");
    scanf("%d", &h);
    ci = (h + w) * 2;
    printf("the perimeter of the rectangle is : %d\n", ci);
}
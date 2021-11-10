#include<stdio.h>
#include<math.h>

int main(){
	int x1,y1,x2,y2;
	float d;
	printf("enter value of x1: ");
	scanf("%d",&x1);
	printf("\nenter value of y1: ");
	scanf("%d",&y1);
	printf("\nenter value of x2: ");
	scanf("%d",&x2);
	printf("\nenter value of y2: ");
	scanf("%d",&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("\nthe distance is :%f",d);
	return 0;
}
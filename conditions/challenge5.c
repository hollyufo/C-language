#include <stdio.h>

int main(){
	
	int i;
	int x;
	printf("enter the first value : ");
	scanf("%i",&i);
	printf("\nenter the second value : ");
	scanf("%i",&x);
	if(i == x){
			int y = ( i + x ) * 3;
            printf("the numbers you entered are  the smae so the summ will get tripled : %i\n", y);
	}
	else{
			int z = i + x;
			printf("the sum of the first value and second value is c %i\n", z);
	}
}
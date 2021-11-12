#include<stdio.h>
int main() {
	int nbr;
	printf("enter an integer: ");
	scanf("%d", &nbr);
	if(nbr < 0){
		printf("%i is a negative integer.\n", nbr);
	}
	else if(nbr > 0){
		printf("%i is positive integer.\n", nbr);
	}
	else{
		printf("%i is null.\n", nbr);
	}
}
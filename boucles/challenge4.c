#include <stdio.h>


int main(void){

    int x;
    int sum = 0;
    int max = 0;

    while (1) {
        printf("enter an integer: ");
        scanf("%d", &x);
        if (x <= 100 && x > 0){
             sum += x;
            if (x > max && x <= 100){
                max = x;
            }
        }

        else if (x == 0){
            printf("somme = %d\n", sum);
            printf("max = %d\n", max);
            break;
        }

    }
    return 0;
}
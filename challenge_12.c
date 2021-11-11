#include <stdio.h>
int main() {
    int a; 
    int reversed = 0;
    int remainder;
    printf("Enter an integer: ");
    scanf("%d", &a);
    while (a != 0) {
        remainder = a % 10;
        reversed = reversed * 10 + remainder;
        a /= 10;
    }
    printf("Reversed number = %d \n", reversed);
    return 0;
}
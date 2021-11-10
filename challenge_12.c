#include <stdio.h>
int main() {
    int a, r = 0, rr;
    printf("enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        rr = n % 10;
        r = rev * 10 + rr;
        a /= 10;
    }
    printf("Reversed number = %d", r);
    return 0;
}
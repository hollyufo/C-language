#include <stdio.h>
int main()
{
    int octalNumber[10], number, i, j;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    long int decimalNumber;
    decimalNumber = number;

    for(i = 0; number > 0; i++)
    {
        octalNumber[i] = number % 8;
        number = number / 8;
    }

    printf("\n Equivalent Octal Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", octalNumber[j]);
    }
    printf("\n");
    
	printf("Equivalent hexadecimal number of a Given Number: %lX ",decimalNumber);
	printf("\n");
    return 0;
}

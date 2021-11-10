#include <stdio.h>

int main ()
{
    char firstname[20];
    char lastname[20];
    int age;
    char phonenumber[20];
    char gender[20];

    printf("Whats your first name?\n");
    scanf("%s", firstname);
    printf("whats your last name?\n");
    scanf("%s", lastname);
    printf("what your age ?\n");
    scanf("%i",&age);
    printf("what is your phone number ?\n");
    scanf("%s", phonenumber);
    printf("what is your gendre ? \n");
    scanf("%s", gender);
    printf("hello your full name is %s %s and your age is %i and your phone number is %s and your gender is %s", firstname, lastname, age, phonenumber, gender);
    return(0);
}
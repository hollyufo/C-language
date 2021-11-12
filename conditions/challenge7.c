#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
	int leap = 1;
	int day = 365;
	int months = 12;
	int hours;
	int minutes;
	int seconds;

   if (year % 400 == 0) {
   		day += leap;
   		hours = day * 24;
        minutes = hours * 60;
        seconds = minutes * 60;
		printf("%d is a leap year so it has %d months and %d days and  %d hours and %d minutes %d seconds .\n", year, months, day, hours, minutes, seconds);
   }

   else if (year % 100 == 0) {
   		hours = day * 24;
        minutes = hours * 60;
        seconds = minutes * 60;
		printf("%d is a not leap year so it has %d months and %d days and  %d hours and %d minutes %d seconds .\n", year, months, day, hours, minutes, seconds);
   }

   else if (year % 4 == 0) {
   		day += leap;
   		hours = day * 24;
        minutes = hours * 60;
        seconds = minutes * 60;
		printf("%d is a leap year so it has %d months and %d  days and  %d hours and %d minutes %d seconds .\n", year, months, day, hours, minutes, seconds);
   }

   else {
   		hours = day * 24;
        minutes = hours * 60;
        seconds = minutes * 60;
		printf("%d is not a leap year so it has %d months and %d days and  %d hours and %d minutes %d seconds .\n", year, months, day, hours, minutes, seconds);
   }

   return 0;
}
/*
Challenge 7 : Programme guidé par menu pour convertir l'année
Ecrivez un programme C piloté par menu pour convertir une année donnée en,
variable :
Mois
Jours
Heures
Minutes
Secondes
--------------------------step 1------------------------------------
check if year is leap or not :
    formula to use : 
             leap year if perfectly divisible by 400
             not a leap year if divisible by 100
            but not divisible by 400
            leap year if not divisible by 100
            but divisible by 4
         all other years are not leap years
         
         
--------------------------step 2------------------------------------
claculte how many 
    months
    days
    hourse
    minutes
    seconds
--------------------------info--------------------------------------
leap has 12 months and 366 days and  8784 hours and 527040 minutes and  31,622,400 seconds
----------
non leap so it has 12 months and 365 days and 8760 hours and 31,536,000 seconds

*/
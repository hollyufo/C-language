#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
	int leap = 1;
	int day = 365;
	int mounth = 12;
    int hours = day * 24;
    int minutes = hours * 60;
    int seconds = minutes * 60;

   if (year % 400 == 0) {
   		day += leap;
		printf("%d is a leap year so it has %i months and %i days and  %i hours and %i minutes %i seconds .\n", year, day, hours, minutes, seconds);
   }

   else if (year % 100 == 0) {
		printf("%d is a not leap year so it has %i months and %i days and  %i hours and %i minutes %i seconds .\n", year, day, hours, minutes, seconds);
   }

   else if (year % 4 == 0) {
   		day += leap;
		printf("%d is a leap year so it has %i months and %i days and  %i hours and %i minutes %i seconds .\n", year, day, hours, minutes, seconds);
   }

   else {
		printf("%d is not a leap year so it has %i months and %i days and  %i hours and %i minutes %i seconds .\n", year, day, hours, minutes, seconds);
   }

   return 0;
}

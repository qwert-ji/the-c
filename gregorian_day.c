/*
Q:- According to the Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year.
*/

#include <stdio.h>
int main() {
  int year, year_diff, leap_num , wrong_leaps_counted;
  int day; // 0 : Sunday , 1 : Monday , .............

  printf("Enter the year at or after 01/01/2001 :\t");
  scanf("%d", &year);

  year_diff = year - 2000; //since we started to find out days on 01st jan of years after 2000
  leap_num = (year_diff - 1) / 4; //-1 is used as we need to add extra day after 1st Feb not on 1st Jan
  wrong_leaps_counted = (year_diff / 100) - (year_diff / 400) ; //years which are divisible by 100 but not by 400
  day = year_diff + leap_num - wrong_leaps_counted ; //At the end of normal year day on first jan exceeds by 1 to pervious but after leap year it exceeds by 2
  day %= 7; //finally removing complete weeks

  if (day == 0) {
    printf("it was Sunday on 01/01/%d\n", year);
  } else if (day == 1) {
    printf("it was Monday on 01/01/%d\n", year);
  } else if (day == 2) {
    printf("it was Tuesday on 01/01/%d\n", year);
  } else if (day == 3) {
    printf("it was Wednesday on 01/01/%d\n", year);
  } else if (day == 4) {
    printf("it was  Thursday on 01/01/%d\n", year);
  } else if (day == 5) {
    printf("it was Friday on 01/01/%d\n", year);
  } else {
    printf("it was Saturaday on 01/01/%d\n", year);
  }

  return 0;
}

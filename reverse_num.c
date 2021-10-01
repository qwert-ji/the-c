/*
Q:- A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.
*/

#include <stdio.h>
int main() {
  int num, temp_num, reversed = 0;

  printf("Enter The Five Digit Number :\t");
  scanf("%d", &num);

  temp_num = num;

  reversed += (temp_num % 10) * 10000;
  temp_num = temp_num / 10;
  reversed += (temp_num % 10) * 1000;
  temp_num = temp_num / 10;
  reversed += (temp_num % 10) * 100;
  temp_num = temp_num / 10;
  reversed += (temp_num % 10) * 10;
  temp_num = temp_num / 10;
  reversed += (temp_num % 10);

  printf("Original Number :\t%d\n", num);
  printf("Reversed Number :\t%d\n", reversed);

  if (num == reversed) {
    printf("Original Number And Reversed Numbers Are Equal\n");
  } else {
    printf("Original Number And Reversed Numbers Are Not Equal\n");
  }

  return 0;
}

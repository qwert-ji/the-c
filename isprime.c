#include <stdio.h>
int isPrime(unsigned long int num);
int main() {
  unsigned long int num;
  printf("Enter a number :\t");
  scanf("%lu", &num);

  if (isPrime(num)) {
    printf("%lu is a prime number\n", num);
  } else {
    printf("%lu is not a prime number\n", num);
  }
}

int isPrime(unsigned long int num) {
  if (num > 1) {
    for (unsigned long int i = 2; i < num / (i - 1); i += 2) {
      if (num % i == 0) {
        printf("%lu is divisible by %lu\n", num, i);
        return 0;
      }

      if (i == 2) {
        i--;
      }
    }

    return 1;
  } else {
    return 0;
  }
}
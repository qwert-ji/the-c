#include <math.h>
#include <stdio.h>
void roots(float a, float b, float c);
int main() {
  float a, b, c;
  printf("Enter the coefficients of x^2 , x , x^0 :\t");
  scanf("%f%f%f", &a, &b, &c);

  roots(a, b, c);

  printf("\n");
  return 0;
}

void roots(float a, float b, float c) {
  double D, x1, x2;
  D = (b * b) - (4 * a * c);

  if (D > 0) {
    printf("Roots Are Real And Unequal\n");
    x1 = ((-b + sqrt(D)) / (2 * a));
    x2 = ((-b - sqrt(D)) / (2 * a));
    printf("alpha : %2.3f , beta : %2.3f", x1, x2);
  }

  else if (D == 0) {
    printf("Roots Are Real And Equal\n");
    x1 = ((-b) / (2 * a));
    printf("alpha : %2.3f , beta : %2.3f", x1, x1);
  }

  else {
    double p1, p2;
    printf("Roots Are Imaginary\n");
    p1 = ((-b) / (2 * a));
    p2 = (sqrt(-D) / (2 * a));
    printf("alpha : %2.3f + %2.3fi , beta : %2.3f - %2.3fi", p1, p2, p1, p2);
  }
}

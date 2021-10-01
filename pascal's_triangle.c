#include <stdio.h>
int nCr(int n, int r);
int main() {
  int n;

  printf("Enter How Many Rows You Wants To Get Printed :\t");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int tabs = 0; tabs < (n - i - 1); tabs++) {
      printf("\t");
    }
    for (int j = 0; j <= i; j++) {
      printf("%d\t\t", nCr(i, j));
    }
    printf("\n\n");
  }

  return 0;
}

int nCr(int n, int r) {
  float num = 1.0;

  for (int i = 1; i <= r; i++, n--) {
    num = (num * n) / i;
  }

  return num;
}

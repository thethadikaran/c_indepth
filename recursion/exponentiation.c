#include <stdio.h>
#include <stdlib.h>


int exponentiation(int base, int exponent) {
  // base condition
  if (exponent == 0) return 1;

  return base * exponentiation(base, exponent - 1);
}


int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("usage: ./a.exe <n>");
    return 1;
  }

  int a = atoi(argv[1]);     // base
  int n = atoi(argv[2]);     // power

  printf("%d^%d = %d\n", a, n, exponentiation(a, n));

  return 0;
}
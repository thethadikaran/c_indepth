#include <stdio.h>
#include <stdlib.h>


int summation(int n) {
  // base condition
  if (n == 1) return 1;

  return summation(n - 1) + n;
}


int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: ./a.exe <n>");
    return 1;
  }

  int n = atoi(argv[1]);
  printf("summation till %d = %d\n", n, summation(n));

  return 0;
}
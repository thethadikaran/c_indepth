#include <stdio.h>
#include <stdlib.h>


int summation_series(int n) {
  // base condition
  if (n == 0) return 0;

  // at winding phase, print the series
  printf("%d + ", n);              

  // at unwinding phase, calulate the sum
  return summation_series(n - 1) + n;  
}




int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: ./a.exe <n>");
    return 1;
  }

  int n = atoi(argv[1]);
  printf("\b\b= %d\n", summation_series(n));

  return 0;
}
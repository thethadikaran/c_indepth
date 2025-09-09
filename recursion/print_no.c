#include <stdio.h>
#include <stdlib.h>


void print(int n) {
  // base condition
  if (n == 0) return;

  print(n - 1);          // recursive call happens here
                         // code after this line will not be executed
                         // until the base condition is hit

  printf("%d, ", n);     // executed at the unwinding phase
                         // after the base condition is hit
}


int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: ./a.exe <n>");
    return 1;
  }

  int n = atoi(argv[1]);
  printf("1 to %d => ", n);
  print(n);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>


int factorial(int n) {
  // base condition, winding phase ends when this becomes true
  if (n == 1) return n;

  return n * factorial(n - 1);
}






int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: ./a.exe <n>");
    return 0;
  }

  int n = atoi(argv[1]);
  printf("%d! = %d\n", n, factorial(n));

  return 0;  
}
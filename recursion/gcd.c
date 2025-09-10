#include <stdio.h>
#include <stdlib.h>




int gcd(int num1, int num2) {
  if (num1 == 0) return num2;

  return gcd(num2 % num1, num1);
}


int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("usage: ./a.exe <num1> <num2>");
    return 1;
  }

  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);

  printf("GCD(%d, %d) = %d\n", num1, num2, gcd(num1, num2));

  return 0;
}
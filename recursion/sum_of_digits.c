#include <stdio.h>
#include <stdlib.h>


int sum_of_digits(int val) {
  // base condition - when there are no left over digits
  if (val == 0 ) return val;

  // chop of the last digit and using the remaining digits
  // make the recursive call
  return (val % 10) + sum_of_digits(val / 10);
}




int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: ./a.exe <num>");
    return 1;
  }

  int num = atoi(argv[1]);
  printf("sum_of_digits(%d) => %d", num, sum_of_digits(num));
  
  return 0;
}
#include <stdio.h>
#include <stdlib.h>




void prime_factor(int number, int prime) {
  // base condition, can't factor after reaching 1
  if (number == 1) return;

  // if the prime can't divide current number, then find a prime
  // that divides the number
  while (number % prime != 0) prime++;

  printf("%d ", prime);  

  // on each recursive call, the number is factored to smallest number
  // until it reaches to 1
  prime_factor(number / prime, prime);
}


int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: ./a.exe <number>");
    return 1;
  }

  int number = atoi(argv[1]);

  printf("Prime Factors of %d => ", number);
  prime_factor(number, 2);                    // 2 is passed as the first prime

  return 0;
}
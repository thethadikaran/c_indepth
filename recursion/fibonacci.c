#include <stdio.h>
#include <stdlib.h>


int fibonacci(int term) {
  if (term == 0 || term == 1) return 1;

  return fibonacci(term - 2) + fibonacci(term - 1);
}


int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: ./a.exe <no_of_terms>");
    return 1;
  }

  int terms = atoi(argv[1]);
  for (int i = 0; i < terms; i++)
    printf("%d, ", fibonacci(i));
  
  printf("\n");

  return 0;
}
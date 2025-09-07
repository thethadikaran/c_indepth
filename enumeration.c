#include <stdio.h>

int main() {
  // defining an enum data type
  enum custom_name {apple, ball, cat, dog, elephant};

  printf("apple - %d, ball - %d, cat - %d\n", apple, ball, cat);

  
  enum custom_name alphabets;

  alphabets = ball;
  printf("alphabets (using defined value) - %d\n", alphabets);

  alphabets = 33;      // this will work, but not a best pratice
                       // only use values declared in enum
  printf("alphabets (custom value) - %d\n", alphabets);


  return 0;
}
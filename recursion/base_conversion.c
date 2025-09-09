#include <stdio.h>
#include <stdlib.h>

void convert_base(int value, int base) {
  // base condition:- if value becomes 0, return
  if (value == 0) return;

  // on every recursive call, the value is divided by the
  // base number system, until it reaches zero
  convert_base(value / base, base);

  // this print execution happens only at the unwinding stage
  // as we want the reminders in reverse order, we are placing the 
  // print after the recursion call, so that recent reminders are
  // printed first
  if ((value % base) > 9)
    printf("%c", 'A' + (value % base) % 10);
  else
    printf("%d", (value % base));
}







int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: ./a.exe <value> <to_number_system_2,8,16");
    return 0;
  }

  int number = atoi(argv[1]);
  int base = atoi(argv[2]);

  convert_base(number, base);

  return 0;  
}
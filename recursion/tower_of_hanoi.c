#include <stdio.h>
#include <stdlib.h>


void tower_of_hanoi(int disks, char src_tower, char temp_tower, char dest_tower) {
  // base condition: no disks to move
  if (disks == 0) return;

  // step 01: move n-1 disks from A to B via C
  tower_of_hanoi(disks - 1, src_tower, dest_tower, temp_tower);

  // step 02: move a disk from A to C
  printf("Moved disk from %c to %c\n", src_tower, dest_tower);

  // step 03: move n-1 disks from B to C via A
  tower_of_hanoi(disks - 1, temp_tower, src_tower, dest_tower);
}



int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: ./a.exe <no_of_disks>");
    return 1;
  }

  int disks = atoi(argv[1]);

  // A - source tower
  // C - destination tower
  // B - temprory tower
  tower_of_hanoi(disks, 'A', 'B', 'C');  

  return 0;
}
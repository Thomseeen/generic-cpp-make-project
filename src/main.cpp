#include <stdio.h>

#include "basis_def.h"

int main(int argc, char const* argv[]) {
  printf("Base C datatypes:\n");
  printf("size char: %d, size short: %d, size int: %d, size long: %d\n\n", (int)sizeof(char), (int)sizeof(short), (int)sizeof(int), (int)sizeof(long));

  printf("Save defined datatypes uC-style w/o float\n");
  printf("size uint8: %d, size uint16: %d, size uint32: %d, size uint64: %d\n\n", (int)sizeof(uint8), (int)sizeof(uint16), (int)sizeof(uint32), (int)sizeof(uint64));

  return 0;
}

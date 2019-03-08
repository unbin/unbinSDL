#include "./../unbinHash.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  if (argc != 2) {
    printf("Usage: unbinHashFileTest *file path*\n");
    return 0;
  }
  unbinHash_displayString(unbinHash_hashFile(argv[1]));
}

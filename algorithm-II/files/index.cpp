#include <stdio.h>

int main() {
  FILE * coolFilePointer = fopen("coolfile.dat", "wb");

  fclose(coolFilePointer);
}
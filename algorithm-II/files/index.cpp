#include <stdio.h>

struct exampleStruct {
  int exampleNumber;
};


int main() {
  exampleStruct example;
  FILE * coolFilePointer = fopen("coolfile.dat", "wb");

  scanf("%d", &example.exampleNumber);

  fwrite(&example, sizeof(exampleStruct), 1, coolFilePointer);

  fclose(coolFilePointer);
}
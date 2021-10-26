#include "utils.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if(argc != 3) {
    printf("Please set up first and second values \n");
    return -1;
  }

  float firstArg = atoi(argv[1]);
  float secondArg = atoi(argv[2]);

  float result = culc(firstArg, secondArg);
  printf("Result is %.2f \n", result);

  return 0;
}

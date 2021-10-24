#include <stdio.h>
#include <math.h>

#define SQU 2

int x, y;

float culc(x, y) {
  return (pow(x, SQU) + 2.8*x + 0.35) / (cos(2*y) + 3.5);
}

int main() {
  float result = culc(2, 3);
  printf("Result is %f ", result);
  printf("\n");

  return 0;
}

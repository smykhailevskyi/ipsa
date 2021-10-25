#include "lab.h"
#include <math.h>

float culc(int x, int y) {
  return (pow(x, SQU) + 2.8*x + 0.35) / (cos(2*y) + 3.5);
}

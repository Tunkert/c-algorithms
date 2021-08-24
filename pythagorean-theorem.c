#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pythag(double a, double b)
{
  double sumOfSquares = a * a + b * b;
  double c;
  c = sqrt(sumOfSquares);

  return c;
}

int main()
{
  double a = 3;
  double b = 4;

  double solution = pythag(a, b);

  printf("%f\n", solution);

  return 0;
}

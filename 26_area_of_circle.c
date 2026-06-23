
#include <stdio.h>

#define PI 3.141592653

int main(void) {

  double radius = 0;
  double area = 0;

  printf("Radius: ");
  scanf("%lf", &radius);

  area = PI * radius * radius;

  printf("Area: %lf\n", area);

  return 0;
}

#include <stdio.h>

int main(void) {

  double c = 0;
  double f = 0;

  double start = 0;
  double end = 0;
  double step = 0;

  printf("Start(C): ");
  scanf("%lf", &start);

  printf("End(C): ");
  scanf("%lf", &end);

  printf("Step(C): ");
  scanf("%lf", &step);

  printf("-----------------\n");
  printf("|   C   |   F   |\n");
  printf("-----------------\n");

  for (c = start; c < end; c += step) {
    f = (c * 1.8) + 32;
    printf("|%7.2f|%7.2f|\n", c, f);
  }

  printf("-----------------\n");

  return 0;
}
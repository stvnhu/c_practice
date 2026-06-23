
#include <stdio.h>

double km_to_mile(double km);
double km_to_nautical_mile(double km);

int main(void) {

  int start = 0;
  int end = 0;
  int step = 0;

  double mile = 0;
  double n_mile = 0;

  printf("Enter (<start> <end> <step>): ");
  scanf("%d %d %d", &start, &end, &step);

  printf("-----------------------\n");
  printf("|    km    |   mile   |\n");
  printf("-----------------------\n");

  for (int i = start; i < end; i += step) {
    mile = km_to_mile((double)i);
    printf("|%10d|%10.3lf|\n", i, mile);
  }
  printf("-----------------------\n");

  printf("-----------------------\n");
  printf("|    km    |  n_mile  |\n");
  printf("-----------------------\n");

  for (int i = start; i < end; i += step) {
    n_mile = km_to_nautical_mile((double)i);
    printf("|%10d|%10.3lf|\n", i, n_mile);
  }
  printf("-----------------------\n");

  return 0;
}

double km_to_mile(double km) { return km * 0.6213711922; }
double km_to_nautical_mile(double km) { return km * 0.5399568035; }
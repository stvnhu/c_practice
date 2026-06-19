
#include <stdbool.h>
#include <stdio.h>

bool is_leap_year(int year);

int main(void) {

  int start = 0;
  int end = 3000;
  int step = 100;

  printf("|%8s|%8s|\n", "year", "leap");
  printf("-------------------\n");

  for (int i = start; i < end; i += step) {
    printf("|%8d|%8s|\n", i, is_leap_year(i) ? "true" : "false");
  }

  printf("-------------------\n");

  return 0;
}

bool is_leap_year(int year) {

  if (year % 4 != 0) {
    return false;
  } else if (year % 100 != 0) {
    return true;
  } else if (year % 400 != 0) {
    return false;
  }

  return true;
}
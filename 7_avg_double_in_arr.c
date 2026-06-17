
#include <stdio.h>

float avg_float(float arr[], int len);

int main(void) {

  float arr[] = {1.1, 1.1, 1.1, 1.1, 1.1};
  int len = 5;
  printf("Average: %.2lf\n", avg_float(arr, len));

  float arr2[] = {1.23, 2.34, 3.45, 4.56, 5.67};
  int len2 = 5;
  printf("Average: %.2lf\n", avg_float(arr2, len2));

  return 0;
}

float avg_float(float arr[], int len) {

  float total = 0;

  for (int i = 0; i < len; i++) {
    total += arr[i];
  }

  return total / len;
}
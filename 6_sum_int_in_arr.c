
#include <stdio.h>

int sum_int(int arr[], int len);

int main(void) {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int len = 10;
  printf("Total: %d\n", sum_int(arr, len));

  int arr2[] = {123, 645, 234, 765, 345, 432};
  int len2 = 6;
  printf("Total: %d\n", sum_int(arr2, len2));

  return 0;
}

int sum_int(int arr[], int len) {

  int total = 0;

  for (int i = 0; i < len; i++) {
    total += arr[i];
  }

  return total;
}

#include <stdio.h>

int max_int(int arr[], int len);

int main(void) {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int len = 10;
  int max = max_int(arr, len);
  printf("Maximum: %d\n", max);

  int arr2[] = {23, 74, 23, 763, 134, 765, 13, 1234, 23, 4};
  int len2 = 10;
  int max2 = max_int(arr2, len2);
  printf("Maximum: %d\n", max2);

  return 0;
}

int max_int(int arr[], int len) {

  int max = arr[0];

  for (int i = 1; i < len; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}
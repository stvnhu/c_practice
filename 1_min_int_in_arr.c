
#include <stdio.h>

int min_int(int array[], int length);

int main(void) {

  int arr[] = {5, 9, 10, 11, 4, 3, 1, 6, 7};
  int len = 9;
  int min = min_int(arr, len);
  printf("Minimum: %d\n", min);

  int arr2[] = {1};
  int len2 = 1;
  int min2 = min_int(arr2, len2);
  printf("Minimum: %d\n", min2);

  return 0;
}

int min_int(int arr[], int len) {

  int min = arr[0];

  for (int i = 1; i < len; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  return min;
}
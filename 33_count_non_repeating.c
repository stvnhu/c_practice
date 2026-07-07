
#include <stdio.h>

int count_non_repeating(int *arr, int len);

int main(void) {

  int arr[] = {1, 2, 1, 2, 3, 3, 4, 5, 8, 5, 8, 5, 23};
  int len = sizeof(arr) / sizeof(int);

  printf("%d\n", count_non_repeating(arr, len));

  return 0;
}

int count_non_repeating(int *arr, int len) {

  int count = 0;

  for (int i = 0; i < len; i++) {

    for (int j = 0; j < len; j++) {
      if (i != j && arr[i] == arr[j]) {
        break;
      } else if (j == len - 1) {
        count++;
      }
    }
  }

  return count;
}
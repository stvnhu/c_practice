
#include <stdbool.h>
#include <stdio.h>

bool is_disjoint(int arr[], int len, int arr2[], int len2);

int main(void) {

  int arr[] = {1, 3, 5, 7};
  int arr2[] = {2, 4, 6, 8};

  int len = sizeof(arr) / sizeof(arr[0]);
  int len2 = sizeof(arr2) / sizeof(arr2[0]);

  if (is_disjoint(arr, len, arr2, len2)) {
    printf("is disjoint\n");
  } else {
    printf("is not disjoint\n");
  }

  return 0;
}

bool is_disjoint(int arr[], int len, int arr2[], int len2) {

  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len2; j++) {
      if (arr[i] == arr2[j]) {
        return false;
      }
    }
  }

  return true;
}
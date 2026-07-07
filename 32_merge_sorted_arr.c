
#include <stdio.h>
#include <stdlib.h>

int *merge(int *arr1, int len1, int *arr2, int len2);
void print_arr(int *arr, int len);

int main(void) {

  int arr1[] = {1, 3, 5, 7};
  int len1 = sizeof(arr1) / sizeof(int);

  int arr2[] = {2, 4, 6, 8};
  int len2 = sizeof(arr2) / sizeof(int);

  int len3 = len1 + len2;
  int *arr3 = merge(arr1, len1, arr2, len2);
  if (arr3 == NULL) {
    printf("malloc failed");
    return 1;
  }

  print_arr(arr1, len1);
  print_arr(arr2, len2);
  print_arr(arr3, len3);

  free(arr3);

  return 0;
}

int *merge(int *arr1, int len1, int *arr2, int len2) {

  int total_len = len1 + len2;

  int index1 = 0;
  int index2 = 0;

  int *arr3 = malloc(sizeof(int) * total_len);
  if (arr3 == NULL) {
    return NULL;
  }

  for (int i = 0; i < total_len; i++) {

    if (index1 == len1) {
      arr3[i] = arr2[index2];
      index2++;
    } else if (index2 == len2) {
      arr3[i] = arr1[index1];
      index1++;
    } else {
      if (arr1[index1] < arr2[index2]) {
        arr3[i] = arr1[index1];
        index1++;
      } else {
        arr3[i] = arr2[index2];
        index2++;
      }
    }
  }

  return arr3;
}

void print_arr(int *arr, int len) {

  for (int i = 0; i < len; i++) {
    printf("%d", arr[i]);

    if (i < len - 1) {
      printf(" ");
    }
  }

  printf("\n");
}
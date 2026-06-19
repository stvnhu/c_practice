
#include <stdio.h>
#include <stdlib.h>

int *copy_int_arr(int arr[], int len);

int main(void) {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int len = 9;

  int *arr_copy = copy_int_arr(arr, len);

  for (int i = 0; i < len; i++) {
    printf("%d", arr_copy[i]);
    if (i < len - 1) {
      printf(" ");
    }
  }

  printf("\n");
  printf("     arr: %p\n", arr);
  printf("arr_copy: %p\n", arr_copy);

  return 0;
}

int *copy_int_arr(int arr[], int len) {

  int *copy = malloc(len * sizeof(int));

  for (int i = 0; i < len; i++) {
    copy[i] = arr[i];
  }

  return copy;
}
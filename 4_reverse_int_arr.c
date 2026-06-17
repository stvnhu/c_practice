
#include <stdio.h>

void reverse_int_arr(int arr[], int len);
void print_arr(int arr[], int len);

int main(void) {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int len = 10;

  print_arr(arr, len);
  reverse_int_arr(arr, len);
  print_arr(arr, len);

  int arr2[] = {1, 2, 3, 4, 5};
  int len2 = 5;

  print_arr(arr2, len2);
  reverse_int_arr(arr2, len2);
  print_arr(arr2, len2);

  return 0;
}

void reverse_int_arr(int arr[], int len) {

  int temp = 0;

  for (int i = 0; i < len / 2; i++) {
    temp = arr[i];
    arr[i] = arr[len - 1 - i];
    arr[len - 1 - i] = temp;
  }
}

void print_arr(int arr[], int len) {

  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
}

#include <stdio.h>

void rotate_array(int *arr, int len, int rotate_amount);
void print_arr(int *arr, int len);

int main(void) {

  int arr[] = {1, 2, 3, 4, 5, 6};
  int len = sizeof(arr) / sizeof(int);

  print_arr(arr, len);
  rotate_array(arr, len, 2);
  print_arr(arr, len);

  return 0;
}

void rotate_array(int *arr, int len, int rotate_amount) {

  for (int _ = 0; _ < rotate_amount; _++) {

    int temp = arr[len - 1];

    for (int i = len - 1; i > 0; i--) {
      arr[i] = arr[i - 1];
    }

    arr[0] = temp;
  }
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
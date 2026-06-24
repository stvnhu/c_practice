
#include <stdio.h>

void rotate_left(int arr[], int len, int times);
void print_arr(int arr[], int len);

int main(void) {

  int arr[] = {1, 2, 3, 4, 5};
  int len = 5;

  print_arr(arr, len);
  rotate_left(arr, len, 2);
  print_arr(arr, len);

  return 0;
}

void rotate_left(int arr[], int len, int times) {

  for (int _ = 0; _ < times; _++) {

    int temp = arr[0];

    for (int i = 0; i < len - 1; i++) {

      arr[i] = arr[i + 1];
    }

    arr[len - 1] = temp;
  }
}

void print_arr(int arr[], int len) {

  for (int i = 0; i < len; i++) {
    printf("%d", arr[i]);
    if (i < len - 1) {
      printf(" ");
    }
  }
  printf("\n");
}
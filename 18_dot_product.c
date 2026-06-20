
#include <stdio.h>

int dot_product(int v1[], int v2[], int len);
void print_arr(int arr[], int len);

int main(void) {

  int v1[] = {1, 2, 3};
  int v2[] = {3, 2, 1};
  int result = 0;

  result = dot_product(v1, v2, 3);

  print_arr(v1, 3);
  print_arr(v2, 3);
  printf("%d\n", result);

  return 0;
}

int dot_product(int v1[], int v2[], int len) {

  int result = 0;

  for (int i = 0; i < len; i++) {
    result += v1[i] * v2[i];
  }

  return result;
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
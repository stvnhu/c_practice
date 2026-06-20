
#include <stdio.h>

void vector_add(int v1[], int v2[], int result[], int len);
void print_arr(int arr[], int len);

int main(void) {

  int v1[] = {1, 2, 3};
  int v2[] = {3, 2, 1};
  int v3[] = {0, 0, 0};

  vector_add(v1, v2, v3, 3);

  print_arr(v1, 3);
  print_arr(v2, 3);
  print_arr(v3, 3);

  return 0;
}

void vector_add(int v1[], int v2[], int result[], int len) {

  for (int i = 0; i < len; i++) {
    result[i] = v1[i] + v2[i];
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

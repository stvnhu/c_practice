
#include <stdio.h>

int count_int(int arr[], int len, int find);

int main(void) {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int len = 10;
  int find = 1;
  int count = count_int(arr, len, find);
  printf("Num of %d found: %d\n", find, count);

  int arr2[] = {1, 1, 1, 1, 1, 3, 5, 6, 4, 2, 45, 4, 4, 4, 4, 4, 4, 4, 2, 1};
  int len2 = 20;
  int find2 = 4;
  int count2 = count_int(arr2, len2, find2);
  printf("Num of %d found: %d\n", find2, count2);

  return 0;
}

int count_int(int arr[], int len, int find) {

  int count = 0;

  for (int i = 0; i < len; i++) {
    if (arr[i] == find) {
      count++;
    }
  }

  return count;
}
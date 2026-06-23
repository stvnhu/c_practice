
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *nums;
  size_t size;
  size_t capacity;
} IntArray;

int main(void) {

  IntArray arr = {0};
  int len = 0;

  printf("Enter lenth: ");
  scanf("%d", &len);

  for (int i = 0; i < len; i++) {
    if (arr.size >= arr.capacity) {
      if (arr.capacity == 0) {
        arr.capacity = 1;
      } else {
        arr.capacity *= 2;
      }
      arr.nums = realloc(arr.nums, arr.capacity * sizeof(*arr.nums));
    }
    arr.nums[arr.size++] = i;
  }

  for (int i = 0; i < len; i++) {
    printf("%d", arr.nums[i]);
    if (i < len - 1) {
      printf(" ");
    }
  }
  printf("\n");
  printf("%zu\n", arr.size);
  printf("%zu\n", arr.capacity);

  return 0;
}

#include <stdio.h>

int main(void) {

  int size = 0;

  printf("Enter triangle size: ");
  scanf("%d", &size);

  for (int height = 0; height < size; height++) {
    for (int width = 0; width < height + 1; width++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
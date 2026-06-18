
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));

  int num = 0;

  do {
    printf("Number of dice: ");
    scanf("%d", &num);
    if (num < 1) {
      printf("Must be more than 0 dice\n");
    }
  } while (num < 1);

  for (int i = 0; i < num; i++) {
    printf("%d\n", rand() % 6 + 1);
  }

  return 0;
}

#include <stdio.h>

void interative_fib(int len);
int recursive_fib(int pos);

int main(void) {

  int len = 0;

  do {

    printf("Sequence length: ");
    scanf("%d", &len);

    if (len < 3) {
      printf("Sequence length must be > 2\n");
    }

  } while (len < 3);
  printf("\n");

  printf("Iterative\n");
  interative_fib(len);
  printf("\n");

  printf("Recursive\n");
  for (int i = 0; i < len; i++) {
    printf("%d", recursive_fib(i));

    if (i < len - 1) {
      printf(",");
    }
  }
  printf("\n");

  return 0;
}

void interative_fib(int len) {

  int fib1 = 0;
  int fib2 = 1;
  int fib3 = 0;

  printf("%d,%d,", fib1, fib2);

  for (int i = 2; i < len; i++) {
    fib3 = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib3;

    printf("%d", fib3);

    if (i < len - 1) {
      printf(",");
    }
  }

  printf("\n");
}

int recursive_fib(int pos) {

  if (pos > 1) {
    return recursive_fib(pos - 1) + recursive_fib(pos - 2);
  } else if (pos == 1) {
    return 1;
  } else if (pos == 0) {
    return 0;
  } else {
    return -1;
  }
}
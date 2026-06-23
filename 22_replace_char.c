
#include <stdio.h>
#include <string.h>

int main(void) {

  char str[] = "sssstttriiinnng";

  char replace = 's';
  char new = 'm';

  int len = strlen(str);

  printf("%s\n", str);

  for (int i = 0; i < len; i++) {

    if (str[i] == replace) {
      str[i] = new;
    }
  }

  printf("%s\n", str);

  return 0;
}
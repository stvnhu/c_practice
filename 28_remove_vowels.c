
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  char str[] = "string strong strang";

  printf("%s\n", str);

  int len = strlen(str) + 1;
  int removed = 0;

  for (int i = 0; i < len; i++) {

    str[i - removed] = str[i];

    switch (tolower(str[i])) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      removed++;
    }
  }

  printf("%s\n", str);

  return 0;
}

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void flip_case(char str[]);

int main(void) {

  char str[] = "HeLlO wOrLd!";
  printf("Before: %s\n", str);
  flip_case(str);
  printf(" After: %s\n", str);

  char str2[] = "ABC def GHI jkl";
  printf("Before: %s\n", str2);
  flip_case(str2);
  printf(" After: %s\n", str2);

  return 0;
}

void flip_case(char str[]) {

  int len = strlen(str);

  for (int i = 0; i < len; i++) {
    if (isupper(str[i])) {
      str[i] = tolower(str[i]);
    } else if (islower(str[i])) {
      str[i] = toupper(str[i]);
    }
  }
}
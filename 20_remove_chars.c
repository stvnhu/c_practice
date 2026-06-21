
#include <stdio.h>
#include <string.h>

void remove_char(char str[], char c);

int main(void) {

  char str[] = "aabbccdd";
  char c = 'a';
  printf("%s\n", str);
  remove_char(str, c);
  printf("%s\n", str);

  char str2[] = "the wood chuck could chuck wood";
  char c2 = 'o';
  printf("%s\n", str2);
  remove_char(str2, c2);
  printf("%s\n", str2);

  return 0;
}

void remove_char(char str[], char c) {

  int len = strlen(str) + 1;
  int found = 0;

  for (int i = 0; i < len; i++) {

    str[i - found] = str[i];

    if (str[i] == c) {
      found++;
    }
  }
}
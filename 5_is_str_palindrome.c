
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_palindrome(char str[]);
void palindrome_check(char str[]);

int main(void) {

  char str[] = "string";
  palindrome_check(str);

  char str2[] = "asdsa";
  palindrome_check(str2);

  return 0;
}

bool is_palindrome(char str[]) {

  int len = strlen(str);

  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - 1 - i]) {
      return false;
    }
  }

  return true;
}

void palindrome_check(char str[]) {

  if (is_palindrome(str)) {
    printf("%s - Is palindrome\n", str);
  } else {
    printf("%s - Is not palindrome\n", str);
  }
}
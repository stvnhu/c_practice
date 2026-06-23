
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_valid_uk_poscode(char str[]);

int main(void) {

  char postcode[16];
  char first[8];
  char second[8];

  while (true) {
    printf("Enter postcode (XXXX XXX): ");
    scanf("%s %s", first, second);
    strcpy(postcode, first);
    strcat(postcode, " ");
    strcat(postcode, second);

    if (is_valid_uk_poscode(postcode)) {
      printf("%s is valid\n", postcode);
    } else {
      printf("%s is not valid\n", postcode);
    }
  }

  return 0;
}

bool is_valid_uk_poscode(char str[]) {

  size_t len = strlen(str);

  if (!(len == 6 || len == 7 || len == 8)) {
    return false;
  }

  if (!isalpha(str[len - 1])) {
    return false;
  }
  if (!isalpha(str[len - 2])) {
    return false;
  }
  if (!isdigit(str[len - 3])) {
    return false;
  }

  if (len == 6 && str[2] != ' ') {
    return false;
  } else if (len == 7 && str[3] != ' ') {
    return false;
  } else if (len == 8 && str[4] != ' ') {
    return false;
  }

  if (!isalpha(str[0])) {
    return false;
  }

  return true;
}

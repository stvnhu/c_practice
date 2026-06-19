
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dynamic_strcat(char str[], char str2[]);

int main(void) {

  char str[] = "Hello";
  char str2[] = " World!";
  char *str3 = dynamic_strcat(str, str2);
  printf("%s\n", str3);
  free(str3);

  char str4[] = "abcde";
  char str5[] = " fghij";
  char *str6 = dynamic_strcat(str4, str5);
  printf("%s\n", str6);
  free(str6);

  return 0;
}

char *dynamic_strcat(char str[], char str2[]) {

  int len = strlen(str);
  int len2 = strlen(str2);
  int len3 = len + len2 + 1;

  char *str3 = calloc(len3, sizeof(char));

  for (int i = 0; i < len; i++) {
    str3[i] = str[i];
  }

  for (int i = 0; i < len2; i++) {
    str3[len + i] = str2[i];
  }

  str3[len3 - 1] = '\0';

  return str3;
}
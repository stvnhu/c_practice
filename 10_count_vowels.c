
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_vowels(char str[]);

int main(void) {

  char str[] = "something something something";
  printf("%s\n", str);
  printf("Vowels: %d\n", count_vowels(str));

  char str2[] = "The swift brown fox jumped over the brick. 1000 2000: 400";
  printf("%s\n", str2);
  printf("Vowels: %d\n", count_vowels(str2));

  return 0;
}

int count_vowels(char str[]) {

  int len = strlen(str);
  int count = 0;

  for (int i = 0; i < len; i++) {
    switch (tolower(str[i])) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      count++;
    }
  }

  return count;
}
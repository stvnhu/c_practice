
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int count_words(char str[], char word[]);

int main(void) {

  char str[] = "word something sword";
  char word[] = "word";

  int count = count_words(str, word);
  printf("%d\n", count);

  return 0;
}

int count_words(char str[], char word[]) {

  int slen = strlen(str);
  int wlen = strlen(word);

  int count = 0;

  for (int i = 0; i < slen - wlen + 1; i++) {

    bool word_found = true;

    for (int j = 0; j < wlen; j++) {

      if (word[j] != str[i + j]) {
        word_found = false;
        break;
      }
    }
    if (word_found) {
      count++;
    }
  }

  return count;
}
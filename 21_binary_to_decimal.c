
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int bin_to_dec(char str[]);

int main(void) {

  char binary[255];
  int dec = 0;

  while (true) {
    printf("Enter binary(q: quit): ");
    scanf("%s", binary);
    if (binary[0] == 'q') {
      break;
    }
    dec = bin_to_dec(binary);
    if (dec == -1) {
      printf("Invalid input\n");
    } else {
      printf("%d\n", dec);
    }
  }

  return 0;
}

int bin_to_dec(char str[]) {

  int len = strlen(str);
  int decimal = 0;

  for (int i = 0; i < len; i++) {

    if (str[i] == '1') {
      decimal += round(pow(2, len - 1 - i));
    } else if (str[i] != '0') {
      return -1;
    }
  }
  return decimal;
}

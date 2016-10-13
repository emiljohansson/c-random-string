#include <stdio.h>
#include <stdlib.h>
#include "random-string.h"

char * randomString(int length) {
  int numOfChars = 62;
  char * characters = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i = 0;
  char* result = malloc(1);

  for (i = 0; i < length; i++) {
    int j = rand() % numOfChars;
    result[i] = characters[j];
  }

  return result;
}

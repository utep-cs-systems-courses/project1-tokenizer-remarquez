#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  puts("Welcome to the tokenizer");
  char test[] = "hello world string  ";
  char *test2 = test;
  char *str = word_start(test2);
  printf("%c\n",str[0]);
  char **str1 = tokenize(test2);
  printf("%c\n",str1[0]);
  
  return 0;
}

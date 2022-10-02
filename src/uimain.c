#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  puts("Welcome to the tokenizer");
  char test[] = "hello world string";
  char *test2 = test;
  char **str1 = tokenize(test2);
  print_tokens(str1);
  free_tokens(str1);
   
  
  return 0;
}

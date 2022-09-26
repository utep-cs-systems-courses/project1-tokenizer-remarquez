#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  
  puts("Welcome to the tokenizer");
  char key = 'a';
  printf("%d\n",space_char(key));
  char test[] = "  hello ";
  char *test2 = test;
  word_start(test2);
  
  
  return 0;
}

#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  
  puts("Welcome to the tokenizer");
  char key = 'a';
  printf("%d\n",space_char(key));
  char *test = "  h ello ";
  *word_start(test);
  printf("%c\n",*test);
  
  return 0;
}

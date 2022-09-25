#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  
  puts("Welcome to the tokenizer");
  char key = 'a';
  printf("%d\n",space_char(key));
  char *test = "   hello ";
  printf("%c\n", *word_start(*test));
  
  return 0;
}

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
  List *h = init_history();
  for(int i = 0; *str1[0] != '\0'; i++){
    add_history(h,str1[i]);
  }
  print_history(h);
   
  
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  puts("Welcome to the tokenizer");
  char key = 'a';
  printf("%d\n",space_char(key));
  char test[] = "hello";
  char *test2 = test;
  char *str = word_start(test2);
  printf("%c\n",str[0]);
  char *str2 = word_terminator(str);
  printf("%c\n", str2[0]);
  int i = count_words(test2);
  printf("%d\n",i);
  char *str3 = copy_str(test2,5);
  printf("%c\n",str3[0]);
  
  return 0;
}

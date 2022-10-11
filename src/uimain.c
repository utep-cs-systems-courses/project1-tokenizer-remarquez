#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  //puts("Welcome to the tokenizer");
  //char test[] = "hello world string";
  //char *test2 = test;
  //char **str1 = tokenize(test2);
  //  print_tokens(str1);
  // free_tokens(str1);
  List *h = init_history();
  // for(int i = 0; *str1[0] != '\0'; i++){
  // add_history(h,str1[i]);
  //}
  //print_history(h);

  while(1) {
    fputs("Select what action to do or 'q' to quit\n> ", stdout);
    fflush(stdout);
    int c;
    while ((c = getchar()) == '\n'); 
    switch(c){
    case 'a':
    add_history(h, in);
    break;
    case 'h':
      print_history(h);
      break;
  case 'q':
    return 0;
    break;
    default:
      printf("Not a valid input \n");
    }
  }
 
  
  return 0;
}

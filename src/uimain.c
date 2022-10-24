#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
#define MAX 100
int main(){
  puts("Welcome to the tokenizer");
  List *h = init_history();
  char **tokens;
  char str[MAX];
  char c = '0';
  while(1) {
    printf("\nInsert t to tokenize, h to print the history, ! plus the # of the index or q to quit\n");
    fgets(str,MAX,stdin);
    c = *str;
    switch(c){
    case 't':
      printf("\nEnter a string: \n");
      fgets(str,MAX,stdin);      
      tokens = tokenize(str);
      print_tokens(tokens);
      add_history(h,str);
    break;
    case 'h':
      print_history(h);
      break;
    case 'q':
    return 0;
    break;
    default:
      break;
    }
    if(str[0]== '!'){
      int a = atoi(str+1);
      char *hh = get_history(h,a);
      printf("\n%s",hh);
      printf("%d",a);
    }
    }
 
  
  return 0;
}

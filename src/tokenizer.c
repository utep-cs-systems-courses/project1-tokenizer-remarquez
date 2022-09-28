#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include <string.h>
int space_char(char c){
  if(c == '\t' || c == ' ' || c == '\0'){
    return 1;
  } 
    else{
      return 0;
    }
  }

int non_space_char(char c){
   if(c != '\t' && c != ' ' &&  c != '\0'){
    return 1;
  } 
    else{
      return 0;
    }
  }

char *word_start(char *str){
  if(*str == '\0'){
    return 0;
    }
  while(space_char(*str)){
    str++;
  }
  return str;
}

char *word_terminator(char *word){
  if(*word == '\0'){
    return 0;
    }
  while(non_space_char(*word)){
    word++;
  }
  return word;
}


int count_words(char *str){
  int cw = 0;
  
  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] == ' ' && str[i+1] != ' '){
      cw++;
    }
  }
  return cw;
}

char *copy_str(char *inStr, short len){
  char *cs;
  len = strlen(inStr)+1;
  if(inStr = '\0'){
    return 0;
  }
  cs = malloc(sizeof *cs * (len));
  if(!cs){
    return 0;
  }
  while(*inStr){
    *cs++ = *inStr++;
  }
  return cs;
}
/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.

   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
char **tokenize(char* str);

/* Prints all tokens. */
void print_tokens(char **tokens);

/* Frees all tokens and the vector containing themx. */
void free_tokens(char **tokens);


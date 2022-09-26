#include <stdio.h>
#include "tokenizer.h"

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
  for(int i = 0; str[i] != '\0'; i++){
  if(space_char(*str)){
    str++;
    continue;
    }
  if(!space_char(*str)){
    printf("%c\n",*(str));
    break;
  }
  else{
    str ='\0';
    return str;
  }
}
}

char *word_terminator(char *word);


int count_words(char *str);

/* Returns a fresly allocated new zero-terminated string 
   containing <len> chars from <inStr> */
char *copy_str(char *inStr, short len);

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


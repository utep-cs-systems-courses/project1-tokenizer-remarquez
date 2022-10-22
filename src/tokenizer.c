#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int space_char(char c){
  if(c == '\t' || c == ' '){
    return 1;
  } 
      return 0;
    
  }

int non_space_char(char c){
  if(!space_char(c) &&  c != '\0'){
    return 1;
  } 
 
      return 0;
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
  
  while(*str != '\0'){
    str = word_start(str);
    str = word_terminator(str);
      cw++;
    
  }
  return cw;
}

char *copy_str(char *inStr, short len){
  char *cs = (char*)malloc(sizeof(char) * (len+1));
  int i;
  for (i = 0; i < len; i++){
    *(cs+i) = *(inStr+i);
  }
  *(cs+i) = '\0';
  
  return cs;
}

char **tokenize(char* str){
  int cw = count_words(str);
  char** arr = (char**)malloc(sizeof(char) * cw+1);
  int i;

  for(i = 0;i < cw ;i++){
    char *temp = word_start(str);
    str = word_terminator(temp);
    arr[i] = copy_str(temp,str-temp);
    
  }
  arr[i] = '\0';

 return arr;
}



void print_tokens(char **tokens){
  int a = 1;
  for(int i = 0;tokens[i] != 0;i++){
    printf("\ntoken[%d]: %s\n",a,tokens[i]);
    a++;
    }
}


void free_tokens(char **tokens){
  char **temp = tokens;
  while(*temp != NULL){
    free(*temp);
    temp++;
  }
  free(tokens);
  printf("\nMemory is free\n");
}



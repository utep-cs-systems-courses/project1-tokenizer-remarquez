#include <stdio.h>
#include <stdlib.h>
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
  char *cs = (char*)malloc(sizeof(char) * (len+1));
  int i;
  for (i = 0; i < len; i++){
    *(cs+i) = *(inStr+i);
  }
  *(cs+i) = '\0';
  
  return cs;
}

char **tokenize(char* str){
 
  int a = 0;
  int i;
  int b = 0;
  int p = 1;
  char *cs;
  char *temp;
  while(p){
    char *ws = word_start(str);
    char *wt = word_terminator(str);
    for(int i = 0; str[i] != '\0'; i++){
    if(str[a] == ws[b]){
      temp = &str[a];
       printf("%c " "%c",str[a],ws[b]);
    }
    else{
      a+1;
    }
      if(str[a] == wt[b]){
	 printf("%c\n""%c\n",str[a],ws[b]);
	 b+1;
        cs = copy_str(str,a);
	i = wt[b];
      }
    }
    p=0;
  } 
  short size = sizeof(str)/sizeof(str[0]);
  int** arr = malloc(size * sizeof(char*));
  for(int i = 0; i < size;i++){
    arr[i] = malloc(size * sizeof(char*));
  }
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      //arr[i][j] = str[i];
  }
}
 
  
  int cw = count_words(str);
  return 0;  
}


void print_tokens(char **tokens);


void free_tokens(char **tokens);


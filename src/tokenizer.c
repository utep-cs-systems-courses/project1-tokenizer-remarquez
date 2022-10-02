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
    if(str[i] == ' ' && str[i-1] != ' '){
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
  int cw = count_words(str);
  char** arr = (char**)malloc(sizeof(char) * cw);
  char *cs = copy_str(str,cw); 
  char temp;
  int a = 0;
  int b = 0;
  while(str[a] != '\0'){
      a++;      
      }
  for(int i = 0; i < a; i++){
    if(i == 0){
      arr[b] = &str[i];
      temp = str[i]; 
      b++;
   }
    else{
      if(space_char(str[i])){
	temp = str[i];
	str[i] = '\0';
	
      }
      else if(non_space_char(str[i]) && space_char(temp)){
	arr[b] = &str[i];
	temp = str[i];
	b++;
      }     
    }
  }
  return arr;
}



void print_tokens(char **tokens){
 for(int i = 0; tokens[i] != 0; i++){
	printf("%s \n",tokens[i]);
      }
}


void free_tokens(char **tokens){
  char *token = tokens[0];
  for(int i = 0; token[i] != '\0'; i++){
    free(tokens[i]);
  }
  free(tokens);
  printf("Memory is free");
}



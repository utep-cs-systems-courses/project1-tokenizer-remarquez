#include <stdio.h>

int space_char(char c){
    if(c = '\t' || ' ' && c != 0){
    return 1;
  } 
    else{
      return 0;
    }
  }

int non_space_char(char c){
  if(c != '\t' || ' ' && c != 0){
    return 1;
  } 
    else{
      return 0;
    }
  }


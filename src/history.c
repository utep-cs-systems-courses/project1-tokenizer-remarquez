#include <stdio.h>
#include <stdlib.h>
#include "history.h"

typedef struct s_item {
  int id;
  char *str;
  struct s_item *next;
}item;

typedef struct List {
  struct item *root;
}s_List;


List* init_history(){
  struct item *root = (s_item *)malloc(sizeof(s_item));
  root->next = 0; 
  
}


void add_history(List *list, char *str){
  List *nn = init_history();
  while(cn != NULL && cn->next != NULL){
    cn = cn->next;
  }
  nn->id = str;
  nn->next = NULL;
  if(cc != NULL){
    cc->next = nn;
  }
  else{
    list = nn;
  }
  

}
/*
char *get_history(List *list, int id);


void print_history(List *list);


void free_history(List *list);*/



